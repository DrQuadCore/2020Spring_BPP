#include <stdio.h>

void ex1()
{
  int num = 10;
  int *p = &num;

  printf("%d\n", num);
  printf("%p\n", p);
}

void ex2()
{
  int i = 3;
  int *p = &i;

  printf("%d\n", *p);
}

int main()
{
  //ex1();
  ex2();
}
