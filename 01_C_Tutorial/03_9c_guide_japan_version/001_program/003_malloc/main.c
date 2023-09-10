#include <stdlib.h>
int main () {
  int *data;
  int i=0;
  data = malloc(sizeof(int)* 1024);

  data[i] = 10;
  data = realloc(data, sizeof(int)* 1024);

  free(data);

}