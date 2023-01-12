// malloc.h source
// https://opensource.apple.com/source/Libc/Libc-825.26/include/malloc/malloc.h.auto.html
#include <stdio.h>
#include <stdlib.h>
#include "malloc_linux.h"

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

void add(Node **head, Node **tail, int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;    // 1 2
  newNode->next = newNode; // NULL;
  if (!*head || !tail)
  {
    *head = *tail = newNode;
  }
  else
  {
    newNode->next = *head;
    *head = newNode;
    (*tail)->next = *head;
  }
}

// Node *n = Address of note to delete
Node *find(Node *head, Node *tail, int data)
{
  while (head->next != tail->next)
  {
    if (head->data == data)
      return head;
    else
      head = head->next;
  }
  return NULL;
}

// Node *n = Address of note to delete
void del(Node **head, Node **tail, Node *n)
{
    if(n == NULL) {
        printf("No Data in link \n");
        return;
    }
  Node *temp = *head;
  while (temp->next != n)
  {
    temp = temp->next; // 5 -> 4 -> 3-> 2-> 1
  }
  temp->next = n->next; // 4 -> 2
  free(n);
}

void insert() {}

// *head reference address (*tail)->next;
void printList(Node *head, Node *tail)
{
  while (head->next != tail->next)
  {                           // Until head's next address is head himself
    printf("%d  ", head->data); // 5 4 3 2 1 The initial address of the head
    head = head->next;
  }
  printf("%d  ", head->data);
  printf("\n");
  }

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int i;
  for (i = 0; i < 5; i++)
  {
    add(&head, &tail, i + 1);
  }
  printList(head, tail);
  del(&head, &tail, find(head, tail, 5));
  printList(head, tail);
  return 0;
}
