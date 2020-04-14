/* Author: Indeep Farma
   Header file for the linked list libaray */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Linnked List Structure */

typedef struct linkedListNode {
  int data;
  struct linkedListNode *next;
} Node;

/*Function Prototypes*/
Node *initNewNode(int data);
