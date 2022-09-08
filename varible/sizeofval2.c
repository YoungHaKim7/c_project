#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(int argc, char **argv)
{

    printf("CHAR_BIT     :    %d\n", CHAR_BIT);
    printf("CHAR_MAX     :    %d\n", CHAR_MAX);
    printf("INT_MAX     :    %d\n", INT_MAX);
    printf("INTPTR_WIDTH     :    %d\n", INTPTR_WIDTH);
    printf("LONG_MAX     :    %ld\n", (long)LONG_MAX);
    printf("LONG_BIT     :    %ld\n", (long)LONG_BIT);
    printf("SCHAR_MAX     :    %d\n", SCHAR_MAX);
    printf("SCHAR_BIT     :    %d\n", SCHAR_BIT);
    printf("SHRT_MAX     :    %d\n", SHRT_MAX);
    printf("SHRT_BIT     :    %d\n", SHRT_BIT);
    printf("UCHAR_MAX     :    %d\n", UCHAR_MAX);
    printf("UINT_MAX     :    %u\n", (unsigned int)UINT_MAX);
    printf("ULONG_MAX     :    %lu\n", (unsigned long)ULONG_MAX);
    printf("USHRT_MAX     :    %d\n", (unsigned short)USHRT_MAX);

    return 0;
}
