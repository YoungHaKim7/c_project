#include <stdio.h>
#include <stdlib.h>

typedef struct {
  void *next;
  int data;
} Node;

Node *head = NULL;

Node *addNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL)
    return NULL;

  newNode->data = data;
  newNode->next = head;
  head = newNode;

  return newNode;
}

void removeNode(int data) {
  Node *current = head;
  Node *prev = NULL;

  while (current != NULL && current->data != data) {
    prev = current;
    current = current->next;
  }

  if (current == NULL) {
    printf("Node with data %d not found.\n", data);
    return;
  }

  if (prev == NULL) {
    // Node to be removed is the head
    head = current->next;
  } else {
    prev->next = current->next;
  }

  free(current);
}

void insertNode(int data, int afterData) {
  Node *current = head;

  while (current != NULL && current->data != afterData) {
    current = current->next;
  }

  if (current == NULL) {
    printf("Node with data %d not found.\n", afterData);
    return;
  }

  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL)
    return;

  newNode->data = data;
  newNode->next = current->next;
  current->next = newNode;
}

void printList(void) {
  Node *current = head;

  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }

  printf("NULL\n");
}

void printMenu(void) {
  printf("You have the following options:\n");
  printf("\t1. Add a node to the list.\n");
  printf("\t2. Remove a node from the list.\n");
  printf("\t3. Insert a node into the list.\n");
  printf("\t4. Print your list.\n");
  printf("\t5. Quit.\n");
}

int main(void) {

  int option = -1;
  while (option != 5) {
    printMenu();
    printf("Enter your option: ");
    int num_received = scanf("%d", &option);

    if (num_received) {
      switch (option) {
      case 1: {
        int data;
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        if (addNode(data) != NULL) {
          printf("Node added successfully.\n");
        } else {
          printf("Failed to add node.\n");
        }
        break;
      }
      case 2: {
        int data;
        printf("Enter data to remove from the list: ");
        scanf("%d", &data);
        removeNode(data);
        break;
      }
      case 3: {
        int data, afterData;
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        printf("Enter data after which to insert: ");
        scanf("%d", &afterData);
        insertNode(data, afterData);
        break;
      }
      case 4:
        printList();
        break;
      case 5:
        break;
      default:
        printf("Invalid option. Please enter a number between 1 and 5.\n");
        break;
      }
    } else {
      // Clear input buffer in case of invalid input
      while (getchar() != '\n')
        ;
      printf("Invalid input. Please enter a number between 1 and 5.\n");
    }
  }

  return 0;
}
