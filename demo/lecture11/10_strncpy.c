#include <stdio.h>
#include <string.h>

int main()
{
  char str1[3]="hi",  str2[6]="hello";

  strncpy(str1, str2, sizeof(str1)-1);
  str1[sizeof(str1)-1] = '\0';

  puts(str1);
  puts(str2);
  return 0;
}
