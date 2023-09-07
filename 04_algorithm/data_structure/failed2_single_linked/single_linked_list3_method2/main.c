#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

int main() {
  struct node *head = malloc(sizeof(struct node));
  head->data = 45;
  head->link = NULL;

  struct node *current = malloc(sizeof(struct node));
  current->data = 98;
  current->link = NULL;
  head->link = current;

  struct node *current2 = malloc(sizeof(struct node));
  current->data = 3;
  current->link = NULL;

  head->link->link = current;

  printf("%d\n", current->data);
  return 0;
}

// head ->link => 1000   / 1번째 노드 접근
// head ->link->link => 2000   / 2번째 노드 접근
// head ->link -> link => 3000 / 3번째 노드 접근
// head ->link -> link ->link => NULL
// head ->link->link = current; / 3번째 노드 접근
// https://youtu.be/HrY_YmU1vdg
// result:
// $ ./main
// 3
