#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};
typedef struct Node Node;

struct Queue {
  int length;
  struct Node *head, *tail;
};
typedef struct Queue Queue;

void constructor(Queue *q);
void enqueue(Queue *q, int value);
void dequeue(Queue *q);
int peek(Queue *q);

int main() {
  int choice, value;
  Queue q;
  constructor(&q);

  printf("\nQueue using Linked List by Albi\n");
  while (choice != 4) {
    printf("\n1.Enquque\n2.Dequeue\n3.Peek\n4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\nEnter the value to enqueue: ");
      scanf("%d", &value);
      enqueue(&q, value);
      break;
    case 2:
      printf("\nDequeued the front element\n");
      dequeue(&q);
      break;
    case 3:
      value = peek(&q);
      if (value != -1) {
        printf("\nFront value is: %d\n", value);
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

void constructor(Queue *q) {
  q->length = 0;
  q->head = q->tail = NULL;
};

void enqueue(Queue *q, int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->value = value;
  newNode->next = NULL;
  if (q->tail == NULL) {
    q->head = q->tail = newNode;
  } else {
    q->tail->next = newNode;
    q->tail = newNode;
  }
  q->length++;
};

void dequeue(Queue *q) {
  if (q->head == NULL) {
    printf("\nThe queue is empty!\n");
  } else {
    Node *temp = q->head;
    q->head = q->head->next;

    if (q->head == NULL)
      q->tail = NULL;
    free(temp);
    q->length--;
  }
};

int peek(Queue *q) {
  if (q->head == NULL) {
    printf("\nQueue is empty!\n");
    return -1;
  }
  return q->head->value;
}