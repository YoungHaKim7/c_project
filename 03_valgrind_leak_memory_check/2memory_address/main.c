#include<stdio.h>
#include<stdlib.h>

char *array;

void f1() {
    array = malloc(10);
}

void f2() {
    free(array);
}

int main(int argc, char const *argv[])
{
    f1();
    f2();

    printf("Hello world!\n");

    array[0] = 'A';

    return 0;
}
