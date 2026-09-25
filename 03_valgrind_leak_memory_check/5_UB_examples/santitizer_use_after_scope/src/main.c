#include <stdio.h>

int main(void)
{
    int *p;

    {
        int x = 42;
        p = &x;
    }

    printf("%d\n", *p);  // UB
}
