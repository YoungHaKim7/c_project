#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

int main (int argc, char** argv) {

    printf("CHAR_BIT     :    %d\n", CHAR_BIT);
    printf("CHAR_MAX     :    %d\n", CHAR_MAX);
    printf("CHAR_MIN     :    %d\n", CHAR_MIN);
    printf("INT_MAX     :    %d\n", INT_MAX);
    printf("INT_MIN     :    %d\n", INT_MIN);
    printf("LONG_MAX     :    %ld\n", (long) LONG_MAX);
    printf("LONG_MIN     :    %ld\n", (long)LONG_MIN);
    printf("SCHAR_MAX     :    %d\n", SCHAR_MAX);
    printf("SCHAR_MIN     :    %d\n", SCHAR_MIN);
    printf("SCRT_MAX     :    %d\n", SHRT_MAX);
    printf("SCRT_MIN     :    %d\n", SHRT_MIN);
    printf("UCHAR_MAX     :    %d\n", UCHAR_MAX);
    printf("UINT_MAX     :    %d\n",(unsigned int) UCHAR_MAX);
    printf("ULONG_MAX     :    %d\n",(unsigned long) ULONG_MAX);
    printf("USHRT_MAX     :    %d\n",(unsigned long) USHRT_MAX);

    return 0;

}
