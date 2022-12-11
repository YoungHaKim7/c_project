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
  ptr->data = 98;
  ptr->link = NULL;

  head->link = ptr;

  int data = 3;

  head = add_beg(head, data);
  ptr = head;
  while(ptr != NULL)
  {
    printf("%d ", ptr->data)
    ptr = ptr->link;
  }

  return 0;
}

// result:
// $ ./main
// 3
