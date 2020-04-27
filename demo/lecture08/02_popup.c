#include <stdio.h>

int main()
{
  int x = 99;
  int* p;
  p = &x;

  printf("%p\n", p);
}
