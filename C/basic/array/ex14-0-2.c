#include <stdio.h>

int main()
{
  int arr[2][2] = {
                     {1, 2},
                     {3, 4}
                  }; //선언과 동시 초기화
  
  int cnt = 1;

  //출력
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      printf("%5d", arr[i][j]);
    }
    //줄띄우기
    printf("\n");
  }
  return 0;
}
