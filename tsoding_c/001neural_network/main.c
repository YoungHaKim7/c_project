#include <stdio.h>

#define WIDTH 20
#define HEIGHT 20


void apply_weights_to_inputs(float inputs[HEIGHT][WIDTH],
                             float weights[HEIGHT][WIDTH]) {
  float output = 0.0f;
  
  for (int y = 0; y < HEIGHT; ++y) {
    for (int y = 0; y < WIDTH; ++y) {
      output += inputs[y][x] * weights[y][x]
    }
  }
}

float inputs[HEIGHT][WIDTH];

int main(void) {
  printf("Hello, World!");
  return 0;
}
