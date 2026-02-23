#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define INTRO_SIZE 80

struct profile
{
  char name[20];
  int age;
  double height;
  char *intro;
};

int main()
{
  //1.구조체 선언
  struct profile yun1;
  //2.구조체 초기화
  strcpy(yun1.name, "서하윤");
  yun1.age = 17;
  yun1.height = 164.7;

  yun1.intro = (char *)malloc(80*sizeof(char));
  printf("자기소개 : ");
  fgets(yun1.intro, 80*sizeof(char), stdin); //안정적 표준
 
  //3.구조체 출력
  printf("이름 : %s\n", yun1.name);
  printf("나이 : %d\n", yun1.age);
  printf("키 : %.1lf\n", yun1.height);
  printf("자기소개 : %s\n", yun1.intro);

  free(yun1.intro);
  return 0;
}




