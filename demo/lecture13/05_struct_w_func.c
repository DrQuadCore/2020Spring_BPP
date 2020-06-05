#include <stdio.h>
#include <string.h>

typedef struct _word {
  char str[20];
  int count;
} WORD;

// call-by-value, not really setting word
// It creates another word and returns it. (It is not 'Set a word', and just for an usage example.)
WORD SetWord(WORD word, const char* str)
{
  // Wrong!
  //WORD ret_word = {str, word.count};
  WORD ret_word;
  strncpy(ret_word.str, str, sizeof(ret_word.str));
  ret_word.count = word.count;
  return ret_word;
}

void SetWord2(WORD* word, const char* str)
{
  // Wrong!!
  //word->str = str;
  strncpy(word->str, str, strlen(word->str));
}

WORD MakeWord(const char* str)
{
  WORD w;
  strncpy(w.str, str, sizeof(w.str));
  w.count = 0;
  return w;
}

void PrintWord(WORD w)
{
  printf("Word: %s\n", w.str);
  printf("Count: %d\n", w.count);
}

int main()
{
  WORD aWord = MakeWord("Turtle");

  PrintWord(aWord);
 
  aWord = SetWord(aWord, "Rabbit");
  PrintWord(aWord);

  SetWord2(&aWord, "Elk");
  PrintWord(aWord);
}

