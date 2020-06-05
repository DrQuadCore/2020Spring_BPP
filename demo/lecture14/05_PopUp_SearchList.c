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

NODE* SearchList(int v)
{
  NODE* cur;
  for(cur = first; cur!=NULL; cur=cur->next) {
    if(cur->value == v)
      return cur;
  }
  return NULL;
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
  PrintList();
  for(int i=0; i<10; i++)
    AddFirst(i);
  PrintList();
  NODE* node = SearchList(8);
  if(node != NULL)
    node->value = 0;

  PrintList();
}
