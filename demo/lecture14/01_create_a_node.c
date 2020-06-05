#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node * next;  
} NODE;

int main()
{
  NODE *new_node = NULL;
  new_node = (NODE*) malloc(sizeof(struct node));

  new_node->next = NULL;
  new_node->value = 10;
  //scanf("%d", &new_node->value);
  
  printf("Value of a node:%d\n", new_node->value);

  return 0;
}
