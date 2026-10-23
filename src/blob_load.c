/* blob_load.c - map the original PE image at its fixed VA and apply relocations */
#include "port_prelude.h"
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <dlfcn.h>

#define SECTION_COUNT 5
typedef struct { uint32_t vaddr, rawsize, vsize; uint32_t blob_off; } SecInfo;
/* generated from sections.json */
extern const SecInfo cde_sections[SECTION_COUNT];
extern const unsigned char cde_section_data[];

int port_init_blob(void) {
    uint32_t base = CDE_IMAGE_BASE;
    uint32_t total = 0x6a0000u;
    void *p = mmap((void *)base, total, PROT_READ | PROT_WRITE,
                   MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
    if (p == MAP_FAILED) {
        p = mmap((void *)base, total, PROT_READ | PROT_WRITE,
                 MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0);
    }
    if (p != (void *)base) {
        fprintf(stderr, "blob map failed: got %p want %p (%s)\n", p, (void *)base, strerror(errno));
        return 0;
    }
    /* fill section raw data */
    for (int i = 0; i < SECTION_COUNT; i++) {
        const SecInfo *s = &cde_sections[i];
        if (s->rawsize)
            memcpy((void *)(base + s->vaddr), cde_section_data + s->blob_off, s->rawsize);
        /* vsize > rawsize => BSS-like, already zero from anonymous mmap */
    }
    return 1;
}

/* relocation table: old code VA -> symbol name (resolved via dlsym on self) */
typedef struct { uint32_t old_va; const char *sym; } RelocEntry;
extern const RelocEntry cde_relocs[];
extern const int cde_reloc_count;

static void *reloc_lookup(const char *sym) {
    void *h = dlopen(NULL, RTLD_NOW | RTLD_GLOBAL);
    void *a = dlsym(h, sym);
    return a;
}

void port_apply_relocs(void) {
    uint32_t base = CDE_IMAGE_BASE;
    uint32_t text_lo = base + 0x1000, text_hi = base + 0x1000 + 5316324u;
    /* scan .rdata and .data for pointers into .text; patch via symbol table */
    static const struct { uint32_t va, size; } scansecs[] = {
        { 0x513000u, 308736u },   /* .rdata raw */
        { 0x55f000u, 7680u   },   /* .data raw */
    };
    int patched = 0, missed = 0;
    for (int si = 0; si < 2; si++) {
        uint32_t va = base + scansecs[si].va, n = scansecs[si].size;
        unsigned char *mem = (unsigned char *)va;
        for (uint32_t off = 0; off + 4 <= n; off += 4) {
            uint32_t v = *(uint32_t *)(mem + off);
            if (v >= text_lo && v < text_hi) {
                /* find symbol */
                const RelocEntry *hit = NULL;
                /* binary search over sorted relocs */
                int lo = 0, hi = cde_reloc_count - 1;
                while (lo <= hi) {
                    int mid = (lo + hi) / 2;
                    if (cde_relocs[mid].old_va == v) { hit = &cde_relocs[mid]; break; }
                    else if (cde_relocs[mid].old_va < v) lo = mid + 1;
                    else hi = mid - 1;
                }
                if (hit) {
                    void *na = reloc_lookup(hit->sym);
                    if (na) { *(uint32_t *)(mem + off) = (uint32_t)(uintptr_t)na; patched++; continue; }
                }
                missed++;
                *(uint32_t *)(mem + off) = 0; /* dangling code ptr: neutralize */
            }
        }
    }
    fprintf(stderr, "relocs: patched=%d neutralized=%d\n", patched, missed);
}
