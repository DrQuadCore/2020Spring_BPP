#include <stdio.h>

int main()
{
  int num = 256*256*256;
  char* c = (char*) &num;

  printf("value of num:\t%d\n", num);
  //printf("addr of num:\t%p\n", &num);

  for(int i=0; i<sizeof(num); i++) {
    printf("value of c:\t%d\n", *(c++));
    //printf("addr of c++:\t%p\n", c++);
  }
}
