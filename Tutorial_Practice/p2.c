// Array Example
#include <stdio.h>

int main()
{
  int myNumbers[] = {25, 50, 75, 100};
  myNumbers[99] = 33;

  printf("%d", myNumbers[99]);

  return 0;
}