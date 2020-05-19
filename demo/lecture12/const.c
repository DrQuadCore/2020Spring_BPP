#include <stdio.h>

int foo(int num)
//int foo(const int num)
{
  return ++num;
}

void bar(const int* num1, const int* num2)
{
  *num1 = *num2;
}

int main()
{
  int num1 = 1;
  int num2 = 2;
  int ret = foo(num1);
  printf("%d\n", ret);

  bar(&num1, &num2);
  return 0;
}
