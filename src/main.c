/* main.c - port entry: init blob, relocations, then hand off to decompiled game main */
#include "port_prelude.h"

extern int _main(int argc, char **argv, char **envp);

int main(int argc, char **argv, char **envp) {
    if (!port_init_blob()) return 3;
    port_apply_relocs();
    return _main(argc, argv, envp);
}

/* high-res timer equivalents */
#include <x86intrin.h>
int port_QueryPerformanceCounter(int64_t *out) {
    struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts);
    *out = (int64_t)ts.tv_sec * 10000000 + ts.tv_nsec / 100;
    return 1;
}
int port_QueryPerformanceFrequency(int64_t *out) { *out = 10000000; return 1; }
uint32_t port_timeGetTime(void) {
    struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint32_t)(ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
}
