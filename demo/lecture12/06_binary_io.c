#include <stdio.h>

int main()
{
  FILE *fp;
  int numbers[] = { 1,2,3,4,5 };

  fp = fopen("numbers_bytes.txt", "wb+");
  if (fp != 0) {
    fwrite(numbers, sizeof(int), sizeof(numbers)/sizeof(int), fp);

    rewind(fp);

    int number = 0;
    while (fread(&number, sizeof(int), 1, fp))
      printf("%d\n", number);

    fclose(fp);
  }

  return 0;
}
