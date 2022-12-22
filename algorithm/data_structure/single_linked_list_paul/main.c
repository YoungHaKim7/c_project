// malloc.h source
// https://opensource.apple.com/source/Libc/Libc-825.26/include/malloc/malloc.h.auto.html
#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"

typedef struct Node {
  int data;
  struct Node *next;
}Node;

void add(Node **head, Node **tail, int data){
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data; // 1 2
  newNode->next = newNode; //NULL;
  if(!*head || !tail){
    *head = *tail = newNode;
  }else{
    newNode->next = *head;
    *head = newNode;
    (*tail)->next = *head;
  }
}

void del(){}

void insert(){}

// *head reference address (*tail)->next;
void printList(Node *head, Node *tail){
  while(head->next != tail ->next){ // Until head's next address is head himself
    printf("%d", head->data); // 5 4 3 2 1 The initial address of the head
    head = head->next;
  }
  printf("%d", head->data);
}  

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  int i;
  for(i=0;i<5;i++){
    add(&head, &tail , i+1);
  }
  printList(head, tail);
  return 0;

}


