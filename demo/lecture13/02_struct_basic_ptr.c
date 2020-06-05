#include <stdio.h>
#include <string.h>

struct _word
{
  char str[20];
  int count;
};

int main() {
  struct _word w1;
  struct _word *w2 = &w1;

  strncpy(w2->str, "Elk", sizeof(w2->str));
  w2->count = 0;

  printf("w1 - Word: %s Count: %d\n", w1.str, w1.count);
  printf("w2 - Word: %s Count: %d\n", w2->str, w2->count);

  return 0;
}

