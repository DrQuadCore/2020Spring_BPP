#include <stdio.h>
#include <string.h>

int CountSpaces(char s[])
{
  int count = 0;

  for (int i = 0; i<strlen(s); i++)
    if (s[i] == ' ')
      count++;

  return count;
}

void main()
{
  char str[100] = "hello nice to meet you";
  printf("#words=%d\n", CountSpaces(str) + 1);
}

