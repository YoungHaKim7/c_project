#include <stdio.h>

int main() {
  int a = 1, b = 2, ans;

  ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);

  printf("%d \n", ans);

  return 0;
}
