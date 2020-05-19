#include <stdio.h>

int main()
{
  char str1[5] = "abcd";
  char str2[5];
  puts(str1);

  printf("Enter a sentence: ");
  scanf("%s", str2);

  puts(str2);
  puts(str1);
}

