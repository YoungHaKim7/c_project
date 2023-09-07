#include <stdio.h>

int main()
{
  int i, j, num;
  printf("Input a number in the range of 1-100");
  scanf("%d", &num);
  i = 0;
  while (i < num)
  {
    for (j = 0; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
    i++;
  }
}