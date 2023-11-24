#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *prev;
};
typedef struct Node Node;

struct Stack {
  int length;
  struct Node *head;
};
typedef struct Stack Stack;

void constructor(Stack *q);
void push(Stack *q, int value);
void pop(Stack *q);
int peek(Stack *q);

int main() {
  int choice, value;
  Stack q;
  constructor(&q);

  printf("\nStack using Linked List by Albi\n");
  while (choice != 4) {
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\nEnter the value to push: ");
      scanf("%d", &value);
      push(&q, value);
      break;
    case 2:
      printf("\nPop an element\n");
      pop(&q);
      break;
    case 3:
      value = peek(&q);
      if (value != -1) {
        printf("\nLast value is: %d\n", value);
      }
      break;
    case 4:
      printf("\nBye :*\n");
      break;
    default:
      printf("\nInvalid choice, please try again\n");
    }
  }
  return 0;
};

void constructor(Stack *q) {
  q->length = 0;
  q->head = NULL;
};

void push(Stack *q, int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->value = value;
  if (q->head == NULL) {
    q->head = newNode;
  } else {
    newNode->prev = q->head;
    q->head = newNode;
  }
  q->length++;
};

void pop(Stack *q) {
  if (q->length == 0) {
    printf("\nThe stack os empty, there is nothing to pop!\n");
  } else if (q->length == 1) {
    Node *temp = q->head;
    q->length = 0;
    q->head = NULL;
    free(temp);
  } else {
    q->length--;
    Node *temp = q->head;
    q->head = q->head->prev;
    free(temp);
  }
};

int peek(Stack *q) {
  if (q->head == NULL) {
    printf("\nStack is empty!\n");
    return -1;
  }
  return q->head->value;
}
