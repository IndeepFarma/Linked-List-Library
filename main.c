#include "linkedList.h"

int main(){

  /* Declaring Variables */
  Node *list = NULL;
  Node *listNode = NULL;
  int i = 0;
  int input = 0;

  /* Malloc the array */
  // list = malloc(sizeof(Node) * 5);

  for(i = 0; i < 5; i++)
  {
    /* Obtain input from the user */
    printf("Enter number to add to list\n");
    scanf("%d", &input);

    listNode = initNewNode(input);

    // printf("List Node : %d\n", listNode->data);

    appendList(&list, listNode);
    // prependList(&list, listNode);

  }

  int length = getListLength(list);
  printf("Length of list: %d\n", length);

  printList(list, length);

  freeList(list);
  free(list);

  return 0;
}