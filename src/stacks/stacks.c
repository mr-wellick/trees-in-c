#include "stacks.h"
#include <stdio.h>
#include <stdlib.h>

Node *createNode(int vertex) {
  Node *newNode = malloc(sizeof(Node));

  if (!newNode) {
    printf("Error allocating new node in createNode()");
    exit(EXIT_FAILURE);
  }

  newNode->vertex = vertex;
  newNode->next = NULL;
  return newNode;
}

void insert(Node **stack, int vertex) {
  if (!(*stack)->next) {
    (*stack)->next = createNode(vertex);
    return;
  } else {
    Node *newNode = createNode(vertex);
    newNode->next = (*stack)->next;
    (*stack)->next = newNode;
  }
}
