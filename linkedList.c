/*  Author: Indeep Farma
    Linked List Library */

#include "linkedList.h"

/* Get the length of the list */
int getListLength(Node *head)
{
  /* Declaring Variables */
  int len = 0;

  /* Count nodes */
  while(head)
  {
    head = head->next;
    len++;
  }

  return len;
}

/* Remove node from head of list */
Node *removeHead(Node **head)
{
  /* Check validity */
  if(*head == NULL)
  {
    return NULL;
  }

  /* Declaring variables */
  Node *temp = *head;

  if((*head)->next != NULL)
  {
    *head = (*head)->next;
  }

  temp->next = NULL;

  return temp;
 
}

/* Initialize a new Node */
Node *initNewNode(int data)
{
  /* Declaring Variables */
  Node *newNode = NULL;
  
  /* Initialize node with data */
  newNode = malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

/* Add the node after the tail of the list */
void appendList(Node **head, Node *node)
{
  /* Check the validity of node */
  if(node == NULL)
  {
    return;
  }

  /* Declaring variables */
  Node *traverse = *head;

  /* Add node to the end of the list */
  if(*head == NULL)
  {
    *head = node;
  }
  else
  {
    while(traverse->next)
    {
      traverse = traverse->next;
    }
    traverse->next = node;
  }
}

/* Add the node to the head of list */
void prependList(Node **head, Node *node)
{
  node->next = *head;
  *head = node;
}

/* Print the entire list */
void printList(Node *head, int len)
{
  for(int i = 0; i < len; i++)
  {
    printf("[%d] = %d\n", i, head->data);
    head = head->next;
  }
}

/* Free the nodes inside of a list */
void freeListNodes(Node *head)
{
  /* Declaring Variables */
  Node *temp = head;

  while(head)
  {
    temp = head;
    head = head->next;
    free(temp);
  }
}