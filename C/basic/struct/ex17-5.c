#include <stdio.h>

struct vison      //구조체
{
  double left;
  double right;
};
//교환하는 함수 -> 시력 좌우 바꾸기 
struct vison exchange(struct vison robot) //함수
{
  //좌우 시력 변경
  double temp;

  temp = robot.left;
  robot.left = robot.right;
  robot.right = temp;

  return robot;
}

int main()
{
  struct vison robot;
  printf("시력 입력 : ");
  // robot.left = 15.5;
  // robot.right = 20.0;
  scanf("%lf%lf", &(robot.left), &(robot.right));
  
  robot = exchange(robot);
  printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);

  return 0;
}










