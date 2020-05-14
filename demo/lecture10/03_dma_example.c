#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n, i, *a;
  printf("how many numbers? ");
  scanf("%d", &n);
  a = (int*)malloc(sizeof(int)*n);
  //a = (int*)calloc(n, sizeof(int));

  for (i=0; i<n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n; i++)
    printf("%d ", a [i]);
  printf("\n");

  free(a);
  a = NULL;

  for (i = 0; i < n; i++)
    printf("%d ", a [i]);
  printf("\n");

  return 0;

}

