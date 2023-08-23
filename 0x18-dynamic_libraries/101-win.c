#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int rand(void) {
    static int (*original_rand)(void) = NULL;

    if (!original_rand) {
        original_rand = dlsym(RTLD_NEXT, "rand");
    }

    // Force winning number 9
    return 9;
}
