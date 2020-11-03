#include <stdio.h>
void
main ()
{
  int x, y, z;
  printf ("Enter two digits\n");
  scanf ("%d %d", &x, &y);
  {
    z = x * y;
  }
  printf ("The product of two digits %d and %d is %d\n", x, y, z);
  return 0;
}
