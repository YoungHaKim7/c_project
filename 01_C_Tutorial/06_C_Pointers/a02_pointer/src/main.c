#include <stdio.h>

void change_value(int* nb);

void change_value(int* nb)
{
    *nb = 1337;
}

int main()
{
    int nb;

    nb = 42;
    change_value(&nb);
    printf("%d\n", nb);
}
