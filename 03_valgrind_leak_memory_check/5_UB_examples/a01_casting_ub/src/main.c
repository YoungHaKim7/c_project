#include <stdio.h>

int main(void) {
    const int x = 42;

    printf("x = %p\n", (void *)&x);

    int *p = (int *)&x;
    printf("p pointer size : %zu bytes\n", sizeof p); // pointer size
    printf("x int size : %zu bytes\n", sizeof x);     // int size

    printf("x  = %d\n", x);
    printf("*p = %d\n", *p);
    printf("p  = %p\n", (void *)p);

    *p = 100; // UB: modifying an object defined as const

    printf("x  = %d\n", x);
    printf("*p = %d\n", *p);
    printf("p pointer size : %zu bytes\n", sizeof p); // pointer size
    printf("x int size : %zu bytes\n", sizeof x);     // int size

    return 0;
}
