#include <stdio.h>

int main()
{
  FILE* fp;
  fp = fopen("example.txt", "r");
  char str[20];

  while (fgets(str, sizeof(str), fp) != 0) {
    puts(str);
  }

  fclose(fp);
}

