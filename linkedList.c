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

/* Remove a desired node from the list */
Node *removeNode(Node **head, int data)
{
  /* Check validity */
  if(*head == NULL)
  {
    return NULL;
  }

  /* Declaring variables */
  Node *traverse = *head;
  Node *remNode = NULL;

  while(traverse->next->data != data)
  {
    traverse = traverse->next;
  }

  remNode = traverse->next;
  traverse->next = remNode->next;
  return remNode;
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

/* Remove node from tail of list */
Node *removeTail(Node **head)
{
  /* Check validity */
  if(*head == NULL) 
  {
    return NULL;
  }

  /* Declaring variables */
  Node *traverse = *head;
  Node *temp = NULL;

  /* Traverse to the tail */
  while(traverse->next->next != NULL)
  {
    traverse = traverse->next;
  }

  temp = traverse->next;
  traverse->next = NULL;

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

/* Copy list into another list */
void copyList(Node **des, Node **src)
{
  /* Check validity */
  if(src == NULL)
  {
    return;
  }

  /* Declaring variables */
  Node *temp = NULL;
  Node *traverse = *src;

  while(traverse)
  {
    temp = initNewNode(traverse->data);
    appendList(des, temp);
    traverse = traverse->next;
  }
}

/* Add the node to the head of list */
void prependList(Node **head, Node *node)
{
  node->next = *head;
  *head = node;
}

/* Print the entire list */
void printList(Node *head)
{
  Node *temp = head;
  while(temp)
  {
    printf("%d - ", temp->data);
    temp = temp->next;
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