/*  Author: Indeep Farma
    Linked List Library */
#include <stdio.h>
#include <stdlib.h>

/* Create the linked list struct */
typedef struct linkedListNode{
  int data;
  struct linkedListNode *next;
} Node;

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

int main(){

  /* Declaring Variables */
  Node *list = NULL;
  Node *listNode = NULL;
  // int i = 0;
  int input = 0;

  /* Malloc the array */
  list = malloc(sizeof(Node));

  /* Obtain input from the user */
  printf("Enter number to add to list\n");
  scanf("%d", &input);

  listNode = initNewNode(input);

  printf("List Node : %d\n", listNode->data);

  return 0;
}