#include <stdio.h>

int main(void)
{
  int a[10] = {10}, *pa;

  pa = a;
  printf("%p %p %p\n", a, pa, &a[0]);
  printf("%d %d %d\n", *a, *pa, a[0]);

  return 0; 
}

