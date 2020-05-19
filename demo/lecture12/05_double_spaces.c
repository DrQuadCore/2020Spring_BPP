#include <stdio.h>  

void fgetc_example_double_space()
{
  char ch;
  FILE* fp = fopen("read.txt", "r");
  FILE* fp2 = fopen("write.txt", "w");
  
  if(fp == NULL || fp2 == NULL)
    return;

  while ((ch = fgetc(fp)) != EOF) {
    fputc(ch, fp2);
    if (ch == '\n' || ch == ' ') {
      fputc(ch, fp2);
    }
  }

  fclose(fp);
  fclose(fp2);
}

int main()
{
  fgetc_example_double_space();
  return 0;
}
