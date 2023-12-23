#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[]) {
    int *p = malloc(sizeof(int));
    int n = 5;
    printf("(%d) address of p : %08x\n",
           getpid(), (unsigned) p);
    *p = 0;
    while (*p < n) {
        *p = *p + 1;
        printf("(%d) p: %d\n", getpid(), *p);
    }
    return 0;
}