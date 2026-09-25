#include <stdio.h>

int main(void) {
    const int x = 42;

    printf("x address = %p\n", (void *)&x);
    printf("x value   = %d\n", x);

    unsigned char *x_bytes = (unsigned char *)&x;

    printf("x bytes   = ");

    for (size_t i = 0; i < sizeof x; ++i) {
        printf("%02x ", x_bytes[i]);
    }

    printf("\n");

    int *p = (int *)&x;

    printf("p address = %p\n", (void *)p);
    printf("*p value  = %d\n", *p);

    printf("p bytes   = ");

    unsigned char *p_bytes = (unsigned char *)&p;

    for (size_t i = 0; i < sizeof p; ++i) {
        printf("%02x ", p_bytes[i]);
    }

    printf("\n");

    *p = 100; // UB

    printf("\nAfter *p = 100:\n");

    printf("x value   = %d\n", x);
    printf("*p value  = %d\n", *p);

    printf("x bytes   = ");

    for (size_t i = 0; i < sizeof x; ++i) {
        printf("%02x ", x_bytes[i]);
    }

    printf("\n");

    return 0;
}
