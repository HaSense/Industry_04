#include <stdio.h>

int main()
{
  int a = 10;
  double b = 3.5;
  void *vp;

  vp = &a;
  printf("a : %d\n", *(int *)vp);

  vp = &b;
  printf("a : %.1lf\n", *(double *)vp);
  //printf("a : %d\n", *(int *)vp);
 
    return 0;
}
