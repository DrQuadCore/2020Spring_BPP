#include <stdio.h>

void ConvertCase(char str[], int size)
{
  for(int i=0 ; i<size; i++) {
    if ('a' <= str[i] && str[i] <= 'z')
      str[i] = str[i] - 'a' + 'A';
    else if ('A' <= str[i] && str[i] <= 'Z')
      str[i] = str[i] - 'A' + 'a';
  }
}

int main()
{
  char str[20];
  scanf("%s", str);
  printf("Input:  %s\n", str);
  ConvertCase(str, 20);
  printf("Result: %s\n", str);
  return 0;
}
