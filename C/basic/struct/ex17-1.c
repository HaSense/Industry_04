#include <stdio.h>

struct student
{
  int num;
  double grade;
};

int main()
{
  struct student gil_dong;

  gil_dong.num = 2;
  gil_dong.grade = 3.5;

  printf("학번 : %d\n", gil_dong.num);
  printf("학점 : %.1lf\n", gil_dong.grade);

  return 0;
}
