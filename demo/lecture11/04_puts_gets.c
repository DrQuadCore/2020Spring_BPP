#include <stdio.h>
#include <stdlib.h>

int main()
{
  char sentence[10];
  printf("Enter a sentence: ");
  // find the differences among below lines
  scanf("%s", sentence);
  //gets(sentence);
  //fgets(sentence, sizeof(sentence), stdin);

  for(int i=0; i<sizeof(sentence); i++) {
    printf("%d ", sentence[i]);
  }
  printf("\n");

  puts(sentence);
  return 0;
}
