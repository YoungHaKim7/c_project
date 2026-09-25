#include <stdio.h>

int *get_pointer(void)
{
    int x = 42;
    return &x;
}

int main(void)
{
    int *p = get_pointer();

    printf("%d\n", *p); // UB
}
