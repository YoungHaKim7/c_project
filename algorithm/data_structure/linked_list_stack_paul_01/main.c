// malloc.h source
// https://opensource.apple.com/source/Libc/Libc-825.26/include/malloc/malloc.h.auto.html
#include <stdio.h>
#include "malloc_linux.h"

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void push(Node **head, int data) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if(!*head) {
        *head = temp;
    }else{
        temp->next = *head;
        *head = temp;
    }

}

void pop() {
}


void printList(Node *head) {
    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");

}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    printList(head);
}
