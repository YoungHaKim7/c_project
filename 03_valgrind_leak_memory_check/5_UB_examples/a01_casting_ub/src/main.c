#include <stdio.h>

int main(void) {
    const int x = 42;

    int *p = (int *)&x;

    *p = 100; // UB
}
