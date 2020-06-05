#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node * next;  
} NODE;

void PrintList(NODE* first)
{
  NODE *curr = first;
  int count=0;
  while(curr != NULL) {
    printf("%d: Value of current node: %d\n", ++count, curr->value);
    curr = curr->next;
  }
}

int main()
{
  NODE *first = NULL;
  NODE *new_node = NULL;
  new_node = (NODE*) malloc(sizeof(struct node));

  new_node->next = first;
  scanf("%d", &new_node->value);
  first = new_node;
  printf("Value of a node:%d\n", new_node->value);
  
  new_node = (NODE*) malloc(sizeof(struct node));
  new_node->next = first;
  scanf("%d", &new_node->value);
  first = new_node;
  printf("Value of a node:%d\n", new_node->value);
  
  PrintList(first);
 
  return 0;
}
