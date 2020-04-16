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
int getListLength(Node *head);
Node *initNewNode(int data);
Node *removeHead(Node **head);
Node *removeNode(Node **head, int data);
Node *removeTail(Node **head);
void appendList(Node **head, Node *node);
void copyList(Node **des, Node **src);
void freeListNodes(Node *head);
void prependList(Node **head, Node *node);
void printList(Node *head, int len);

