#include <stdio.h>
int
addition (int a1, int a2)
{
  int sum;
  sum = a1 + a2;
  return sum;
}

int
main ()
{
  int x, y;
  printf ("Enter number 1: ");
  scanf ("%d", &x);
  printf ("Enter number 2: ");
  scanf ("%d", &y);

  int res = addition (x, y);
  printf ("Output: %d", res);

  return 0;
}
