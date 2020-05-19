#include <stdio.h>
#include <string.h>

int main()
{
  char s1[3], s2[6];
  strcpy(s1, "abcd");
  /* s1 now contains "abcd" */

  strcpy(s2, s1);
  /* s2 now contains "abcd" */
  
  puts(s1);
  puts(s2);

  return 0;
}
