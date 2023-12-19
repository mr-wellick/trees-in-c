#include "linked-lists.h"

int main(void) {
  Node *dummy_head = createNode(0);

  insert(&dummy_head, 1);
  insert(&dummy_head, 5);
  insert(&dummy_head, -4);

  printList(&dummy_head);

  return 0;
}
