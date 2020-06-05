#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALPHABETS 26
#define MAX_INPUT 100

int* GetCountArray() {
  int* count= (int*) malloc(sizeof(int) * NUM_ALPHABETS);
  for (int i = 0; i < NUM_ALPHABETS; i++) {
    count[i] = 0;
  }
  return count;
}

void PrintCount(const int* count)
{
  for(int i=0; i<NUM_ALPHABETS; i++)
    printf("%c:%d\n", 'a' + i, count[i]);
}

void CountLetters(const char* text, int* count)
{
  for(int i=0; i<strlen(text); i++) {
    count[text[i]-'a']++;
  }
}

int main()
{
  int* count = GetCountArray();
  char* input = (char*) malloc(sizeof(char) * MAX_INPUT);
  printf("Enter a sentence:");
  fgets(input, MAX_INPUT, stdin);
  input[strlen(input)-1] = '\0';

  printf("You have entered \"%s\"\n", input);

  CountLetters(input, count);

  PrintCount(count);
  
  return 0;
}
