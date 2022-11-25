#include<stdio.h>

int main(int argc, char** argv) {
  int x = 0;
  
  x = x +1245;
  x = x + 51521;
  x = x - 513;
  x = x / 2;
  x = x & 14212;
  
  printf("x == %d\n", x);
  
  for(int i = 0; i < 100; ++i) {
    printf("Loop iteration number %d\n", i);
  }  
  
  printf("Done!\n");
  
  return 0;
}