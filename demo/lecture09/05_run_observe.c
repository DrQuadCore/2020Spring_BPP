#include <stdio.h>

void run_and_observe()
{
  int a[3] = { 1,2,3 }, *b = &a[0], *c = a;

  printf("FIRST CASE\n");
  for (int i = 0; i < 3; i++)
    printf("a[%d]:%2d, *(b+%d):%2d, *(c+%d):%2d\n", i, a[i], i, *(b + i), i, *(c + i));
  for (int i = 0; i < 3; i++)
    printf("&a[%d]:%p,\t(b+%d):%p,\t(c+%d):%p\n", i, &a[i], i, (b + i), i, (c + i));

  char ch[3] = { 'a', 'b', 'c' }, *p_ch = ch;

  printf("SECOND CASE\n");
  for (int i = 0; i < 3; i++)
    printf("ch[%d]:%2c, *(p_ch+%d):%2c\n", i, ch[i], i, *(p_ch + i));
  for (int i = 0; i < 3; i++)
    printf("&ch[%d]:%p,\t(p_ch+%d):%p\n", i, &ch[i], i, (p_ch + i));
}

int main()
{
  run_and_observe();
}
