#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALPHABETS 26
#define MAX_INPUT 100

typedef struct _alphabet {
  char c;
  int count;
} ALPHABET;

ALPHABET* GetAlphabets() {
  ALPHABET *alphabet = (ALPHABET*) malloc(sizeof(ALPHABET) * NUM_ALPHABETS);
  for (int i = 0; i < NUM_ALPHABETS; i++) {
    alphabet[i].c = 'a' + i;
    alphabet[i].count = 0;
  }
  return alphabet;
}

void PrintCount(const ALPHABET* alphabet)
{
  for(int i=0; i<NUM_ALPHABETS; i++)
    printf("%c:%d\n", alphabet[i].c, alphabet[i].count);
}

void CountLetters(const char* text, ALPHABET* alphabet)
{
  for(int i=0; i<strlen(text); i++) {
    alphabet[text[i]-'a'].count++;
  }
}

int main()
{
  ALPHABET* alphabet = GetAlphabets();
  char* input = (char*) malloc(sizeof(char) * MAX_INPUT);
  printf("Enter a sentence:");
  fgets(input, MAX_INPUT, stdin);
  input[strlen(input)-1] = '\0';

  printf("You have entered \"%s\"\n", input);

  CountLetters(input, alphabet);

  PrintCount(alphabet);
  
  return 0;
}
