 // hello.c                                                                   buffers
#include <stdio.h>

int main()
{
    int a = 7; // 2 to 4bytes
    unsigned short integer = 8;// 2bytes
    long integer1 = 8;// 4 bytes
    short integer2 = 8;// 2 bytes


    float b = 8.0; // 4byte - 6 decimal precision:
    double myfloat1 = 7.45; // 8 bytes - 15 decimal places precision
    long double myfloat2 = 7.43453455; //10 bytes - 19 decimal places precision
    char c = 't'; // 1byte

    printf("The size taken by int is %d\xa", sizeof(int));

    printf("hello %c\xa", c);
    return 0;

}
