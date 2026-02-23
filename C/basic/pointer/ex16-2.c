#include <stdio.h>
#include <stdlib.h>
//heap 20byte int 공간을 만들어 사용하자.
int main()
{
  int* pi;
  int sum=0;
  //공간만들기
  pi = (int *)malloc(5 * sizeof(int));
  //예외처리
  if(pi == NULL) {
    printf("메모리가 부족합니다. or heap 변수 생성 실패!!!\n");
    exit(1); // 프로그램 종료
  }
  //heap에 확보한 정수공간에 나이를 입력받고 평균을 구해봅시다.
  printf("다섯명의 나이를 입력하세요 : ");
  for(int i=0; i<5; i++){
    scanf("%d", &pi[i]);
    sum += pi[i];
  }
  printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
  free(pi);
  return 0;
}
