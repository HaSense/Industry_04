#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main()
{
  int a;
  a = 100;
  printf("%d\n", a);

  int* pi;
  pi = (int *)malloc(sizeof(int));
  *pi = 10;
  
  printf("&a : %p\n", &a);
  printf("a : %d\n", a);
  printf("pi : %p\n", pi);
  printf("*pi : %d\n", *pi);
 
  free(pi);
  
  return 0;
}
