#include <stdio.h>
#include <string.h>

int main()
{
  char str1[100] = {}, str2[100] = {};

  printf("Enter a text: ");
  fgets(str1, 100, stdin);
  printf("Enter a pattern: ");
  fgets(str2, 100, stdin);

  str1[strlen(str1)-1] = 0;
  str2[strlen(str2)-1] = 0;

  int count = 0;
  for(int i=0; i<strlen(str1); i++) {
    if(strncmp(str1+i, str2, strlen(str2)) == 0)
      count++;
  }

  printf("The number of occurrence is %d.\n", count);
}
