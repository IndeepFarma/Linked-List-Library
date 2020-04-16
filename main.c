/* Author: Indeep Farma 
  **************************************
  THIS MAIN IS ONLY FOR TESTING PURPOSES
  **************************************
*/

#include "linkedList.h"

int main(){

  /* Declaring Variables */
  Node *list = NULL;
  Node *listNode = NULL;
  int i = 0;
  int input = 0;

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

  /*Node *remove = removeTail(&list);
  printf("Removed node: %d\n", remove->data);*/

  Node *copy = NULL;

  copyList(&copy, &list);

  int length = getListLength(list);
  printf("Length of list: %d\n", length);

  printf("LIST\n");
  printList(list, length);

  printf("*******COPY**********\n");
  printList(copy, length);

  // free(remove);
  freeListNodes(list);
  free(list);

  return 0;
}