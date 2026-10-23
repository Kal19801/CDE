#include <stdlib.h>
void *port_op_new(unsigned int sz) { return malloc(sz); }
void port_op_delete(void *p, ...) { free(p); }
int port_atexit(void (*fn)(void)) { return atexit(fn); }
