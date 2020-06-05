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

void AddFirstWrong(int val)
{
  NODE new_node;
  new_node.value = val;
  if(first != NULL) { // has at least one element
    new_node.next = first;
  }
  first = &new_node;
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
    //AddFirst(i);
    AddFirstWrong(i);
  PrintList();
}
