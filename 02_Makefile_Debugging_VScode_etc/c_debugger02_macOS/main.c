#include <stdio.h>

int main(int argc, char **argv) {
  int x = 0;
  int a = 16; // 1111
  int b = 3;  // 0011
  int c = 2;  // 0010
  int and_x = 0;
  int or_x = 0;
  int xor_x = 0;
  int xor_x2 = 0;
  int not_x = 0;
  int not = 0;
  int not_b = 0;
  int not_a17 = 0;

  x = x + 1245;
  x = x + 51521;
  x = x - 513;
  x = x / 2;
  x = x & 14212;

  and_x = b & c;  // 0010   2 개다 true
  or_x = b | c;   // 0011   2 중 하나만 맞아도 true
  xor_x = a ^ c;  // 0001 0010
  xor_x2 = b ^ c; // 0001    false가  true
  not_x = b + (~c + 1);
  not = ~a;
  not_a17 = ~a + 1;
  not_b = ~b;

  printf("and x = %d\n", and_x);
  printf("or x = %d\n", or_x);
  printf("xor x = %d\n", xor_x);
  printf("xor2 x = %d\n", xor_x2);
  printf("not x = %d\n", not_x);
  printf("not ~a = %d\n", not );
  printf("not~a -17 + 1  = %d\n", not_a17);
  printf("not b = %d\n", not_b);

  printf("---------------");

  printf("x == %d\n", x);

  for (int i = 0; i < 10; ++i) {
    printf("Loop iteration number %d\n", i);
  }

  printf("Done!\n");

  return 0;
}