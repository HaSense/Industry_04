#include <stdio.h>

int plus(int a, int b){
  return a + b;
}
int minus(int a, int b){
  return a - b;
}

int main()
{
   int (*fp)(int, int);
   

   fp = plus;
   printf("result : %d\n", fp(10, 20));
   fp = minus;
   printf("result : %d\n", fp(10, 20));
 
    return 0;
}
