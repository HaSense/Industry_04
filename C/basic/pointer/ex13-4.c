#include <stdio.h>

void auto_func()
{
    int a = 0;
    a++;
    printf("%d\n", a);
}
void static_func()
{
   static int a;
   a++;
   printf("%d\n", a); //1 2 3
}

int main()
{
    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for(int i=0; i<3; i++){
      auto_func();
    }

    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for(int i=0; i<3; i++){
      static_func();
    }

    return 0;
}
