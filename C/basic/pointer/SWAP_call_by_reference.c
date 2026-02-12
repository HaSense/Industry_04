#include <stdio.h>

void swap(int *x, int *y)
{
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a = 10, b = 20;

  swap(&a, &b); //두 변수의 값을 바꾸고 싶다. a:20 | b:10 을 원했음
  
  printf("%d %d\n", a, b);
  return 0;
}
