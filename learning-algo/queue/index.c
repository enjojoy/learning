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