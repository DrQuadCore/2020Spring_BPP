#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node * next;  
} NODE;

NODE* first;

void AddFirst(int val)
{
  NODE* new_node = (NODE*) malloc(sizeof(NODE));
  new_node->value = val;
  new_node->next = first;
  first = new_node;
}

void DeleteNode(int v) {
  printf("Deleting a node with %d\n", v);
  NODE *cur= first, *prev=NULL;
  while(cur != NULL && cur->value != v) {
    prev = cur;
    cur = cur->next;
  }
  if(cur == NULL) /* v was not found */
    return;
  if(prev == NULL)
    first = first ->next;       /* v is in the first node */
  else
    prev->next = cur->next;  /* v is in some other node */

  free(cur);
}

void PrintList()
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
  for(int i=0; i<10; i++)
    AddFirst(i);
  PrintList();

  DeleteNode(9);
  PrintList();
  DeleteNode(10);
  PrintList();
  DeleteNode(5);
  PrintList();
}
