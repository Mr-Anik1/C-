#include <stdio.h>
int main()
{
  int a = 5, b;
  printf("Testing C code...\n");
  b = a++, ++a;
  printf("%d", a);
  printf("\n%d", b);
}