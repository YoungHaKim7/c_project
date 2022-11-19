// https://fasterthanli.me/articles/working-with-strings-in-rust

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  printf("argv = %p\n", argv);
  for (int i =0; i < argc; i++) {
    char *arg = argv[i];
    printf("argv[%d] = %p\n", i, argv[i]);
    printf("%s\n", arg);
  }
  
  return 0;
}