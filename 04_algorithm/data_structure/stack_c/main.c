#include <stdio.h>
#define STACK_SIZE 5

void push(int *);
void pop(int *);

void push(int *top) {
  int data;

  printf("push data : ");
  scanf("%d,", &data);
  *top = data;
}

void pop(int *top) { printf("pop data : %d\n", *top); }

int main() {
  int stack[STACK_SIZE] = {0}; // stack 크기는 int 배열 5
  int top = 0;                 // top은 stack의 0번째 인덱스로 시작
  int num;

  do {
    printf("1. push   2.pop   3.print   4. end\n");
    scanf("%d", &num);

    // push
    if (num == 1) {
      if (top > STACK_SIZE - 1) {
        printf("Stack is full...\n");
      } else {
        push(&stack[top]);
        top++;
      }

      // pop
    } else if (num == 2) {
      if (top < 0) {
        printf("Stack is empty...\n");
      } else {
        top--;
        pop(&stack[top]);
      }

      // print
    } else if (num == 3) {
      printf("data: ");
      for (int i = 0; i < STACK_SIZE; i++) {
        printf("%d ", stack[i]);
      }
      printf("\n");
    }
  } while (num != 4);

  return 0;
}
