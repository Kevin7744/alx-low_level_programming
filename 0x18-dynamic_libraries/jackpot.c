#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>

int (*real_main)(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    real_main = dlsym(RTLD_NEXT, "main");
    printf("--> Please make me win!\n");
    return real_main(argc, argv);
}
