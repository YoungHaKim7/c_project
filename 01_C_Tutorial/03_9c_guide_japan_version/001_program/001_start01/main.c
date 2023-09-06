#include <stdio.h>

static int i = 1;

int main(void)
{
  /* 특별할거 없는 프로그램  */
  if (i == 1) printf("%lu\n", sizeof(i));
}