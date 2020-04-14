#include "linkedList.h"

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