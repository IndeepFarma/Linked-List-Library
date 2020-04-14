/*  Author: Indeep Farma
    Linked List Library */

#include "linkedList.h"

/* Initialize a new Node */
Node *initNewNode(int data)
{
  /* Declaring Variables */
  Node *newNode = NULL;
  
  newNode = malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}
