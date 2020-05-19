#include <stdio.h>
#include <limits.h>

int main()
{
#if 0
  // Problematic case 1
  int max = INT_MAX;
  printf("%d\n", max);
  printf("%f\n", (float)max);
#endif

  // Problematic case 2
  for ( int a = 16777210; a < 16777224; a++ ) {
    float b = a;
    int c = b;
    printf( "a=%d c=%d\n", a, c);
  }
}
