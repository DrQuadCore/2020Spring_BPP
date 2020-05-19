#include <stdio.h>

int main() {
  while (1) { 
    char ch = getchar();
    if (ch == '\n')
      break;
    printf("%c", ch-'a'+'A');
  }
  printf("\n");
} 


