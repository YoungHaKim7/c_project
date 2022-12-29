#include <stdio.h>

int main() {
  int a = 1, b = 2, ans;
  if (a == 1) {
    if (b == 2) {
      ans = 3;
    } else {
      ans = 5;
    }
  } else {
    ans = 0;
  }

  printf("%d \n", ans);

  return 0;
}
