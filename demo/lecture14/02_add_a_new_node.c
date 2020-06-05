#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node * next;  
} NODE;

int main()
{
  NODE *first = NULL;
  NODE *new_node = NULL;
  new_node = (NODE*) malloc(sizeof(struct node));

  new_node->next = first;
  scanf("%d", &new_node->value);
  first = new_node;
  printf("Value of a node:%d\n", first->value);
  
  new_node = (NODE*) malloc(sizeof(struct node));
  new_node->next = first;
  scanf("%d", &new_node->value);
  first = new_node;
  printf("Value of a node:%d\n", new_node->value);
  
  printf("Value of the first node:%d\n", first->value);
  printf("Value of the second node:%d\n", first->next->value);
 
  return 0;
}
