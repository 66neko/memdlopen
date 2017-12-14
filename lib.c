#include <stdio.h>

static void _libinit() __attribute__((constructor));

int A()
{
    int a = 5;
    int b = 10;
    return a+b;
}

void B()
{
    printf("[LIB]res = %d\n",A());
}

void _libinit() {
    printf("[+] lib init\n");
}

