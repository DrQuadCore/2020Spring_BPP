#include <stdio.h>

int main() {
  char str[5];
  int i = 0;

  while (i < 4) { 
    char ch = getchar();
    if (ch == '\n')
      break;
    str[i++] = ch; 
  }
  str[i] = '\0';
  puts(str);
}

