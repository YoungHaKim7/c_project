#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void *next;
    int data;
} Node;

Node *head = NULL;

Node *addNode(int data)
{
    Node *new = NULL;

    if (head == NULL)
    {
        new = malloc(sizeof(Node));
        if(new == NULL)
            return NULL;
        new->data = data;
        head = new;
        new->next = NULL;
    }else {
        new = malloc(sizeof(Node));
        if (new == NULL)
            return NULL;
        new->data = data;
        new->next = head;
        head = new;
    }

    return new;
}

// remove a node from the list



// insert a node into

void printMenu(void)
{
    printf("You have the following option: \n");
    printf("\t 1. Add a node the list. \n");
    printf("\t 2. Remove a node to the list. \n");
    printf("\t 3. Insert a node to the list. \n");
    printf("\t 4. Print your list. \n");
    printf("\t 5. Quit. \n");
}
int main(void) {

    int option = -1;
    while (option != 5)
    {
        printMenu();
        int num_received = scanf("%d", &option);
        if (num_received)
        {
            switch (option) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    break;
            }
        }
    }
    return 0;
}
