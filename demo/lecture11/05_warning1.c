#include <stdio.h>

int main()
{
  char s1[10];
  char s2[10];

  scanf("%s ", s1);
  puts(s1);
  fgets(s2, 10, stdin);
  puts(s2);
}

