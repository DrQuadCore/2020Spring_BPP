#include <stdio.h>
#include <string.h>

typedef struct _word
{
  char str[20];
  int count;
} WORD;

int main() {
  WORD w1={"Rabbit", 0}, w2;
  w2=w1;

  printf("w1 - Word: %s Count: %d\n", w1.str, w1.count);
  printf("w2 - Word: %s Count: %d\n", w2.str, w2.count);

  w2.count = 1;
  memcpy(&w1, &w2, sizeof(WORD));

  printf("w1 - Word: %s Count: %d\n", w1.str, w1.count);
  printf("w2 - Word: %s Count: %d\n", w2.str, w2.count);
  return 0;
}

