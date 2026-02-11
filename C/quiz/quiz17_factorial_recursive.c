#include <stdio.h>

long long factorial(long long n)
{
  if (n <= 1)
    return 1;

  return n * factorial(n - 1);
}
// 5 * 4 * 3 * 2 * 1  --> 5!
int main()
{
  int n = 20;

  printf("%lld\n", factorial(n));

  return 0;
}
