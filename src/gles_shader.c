/* gles_shader.c - runtime desktop-GLSL -> GLSL ES 3.0 adapter.
   CDE loads shader sources from Resources/Shaders at runtime and concatenates
   shared .glsl chunks; conversion must happen AFTER concatenation, right
   before glShaderSource. This file provides that entry point. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Returns a malloc'd ES-3.0-compatible source. Caller frees. */
char *gles_adapt_shader_source(const char *src, int is_vertex) {
    if (!src) return NULL;
    size_t cap = strlen(src) + 512;
    char *out = (char *)malloc(cap);
    size_t o = 0;
    #define EMIT(...) o += (size_t)snprintf(out + o, cap - o, __VA_ARGS__)

    /* header */
    o += (size_t)snprintf(out + o, cap - o,
        "#version 300 es\n"
        "#define texture2D texture\n"
        "#define gl_FragColor fragColor\n"
        "precision highp float;\n"
        "precision highp int;\n");

    const char *p = src;
    int frag_out_declared = 0;
    while (*p) {
        if (*p == '#') {
            /* strip old #version / #extension directives */
            if (!strncmp(p, "#version", 8) || !strncmp(p, "#extension", 10)) {
                while (*p && *p != '\n') p++;
                continue;
            }
        }
        if (!strncmp(p, "attribute", 9) && (p == src || p[-1] == '\n' || p[-1] == ' ')) {
            o += (size_t)snprintf(out + o, cap - o, "in");
            p += 9;
            continue;
        }
        if (!strncmp(p, "varying", 7) && (p == src || p[-1] == '\n' || p[-1] == ' ')) {
            o += (size_t)snprintf(out + o, cap - o, is_vertex ? "out" : "in");
            p += 7;
            continue;
        }
        if (!is_vertex && !strncmp(p, "gl_FragColor", 12)) {
            if (!frag_out_declared) {
                o += (size_t)snprintf(out + o, cap - o,
                    "layout(location = 0) out vec4 fragColor");
                frag_out_declared = 1;
                p += 12;
                continue;
            }
        }
        if (!is_vertex && !strncmp(p, "texture2D", 9)) {
            o += (size_t)snprintf(out + o, cap - o, "texture");
            p += 9;
            continue;
        }
        out[o++] = *p++;
    }
    out[o] = 0;
    return out;
}
