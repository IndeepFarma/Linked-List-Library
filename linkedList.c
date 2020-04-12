/* Linked List Library */
#include <stdio.h>
#include <stdlib.h>

/* Create the linked list struct */
typedef struct linkedListNode{
  int data;
  struct linkedListNode *next;
} Node;

int main(){

  /* Declaring Variables */
  Node *list = NULL;
  int i = 0;
  int input = 0;

  /* Malloc the array */
  list = malloc(sizeof(Node));

  /* Obtain input from the user */
  printf("Enter number to add to list\n");
  scanf("%d", &input);

  /* Add data to linked list */


  printf("Input : %d\n", input);

  return 0;
}