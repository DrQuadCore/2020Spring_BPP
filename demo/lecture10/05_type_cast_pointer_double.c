#include <stdio.h>

int main()
{
  double d = 10;
  char* c = (char*) &d;

  printf("addr of d:\t%p\n", &d);
  for(int i=0; i<sizeof(d); i++)
    printf("addr of c++:\t%p\n", c++);

  printf("value of d:\t%f\n", d);
  for(int i=0; i<sizeof(d); i++)
    printf("value of c++:\t%d\n", *(c++));
}
