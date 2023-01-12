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

void pop(Node **head) {
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    temp = NULL;
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
    pop(&head); // 3
    pop(&head); // 2
    printList(head);
}
