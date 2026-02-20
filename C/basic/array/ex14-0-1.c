#include <stdio.h>

int main()
{
  int arr[3][4]; //배열 선언
  int cnt = 1;

  //입력&출력
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      arr[i][j] = cnt++;
      printf("%5d", arr[i][j]);
    }
    //줄띄우기
    printf("\n");
  }
  return 0;
}
