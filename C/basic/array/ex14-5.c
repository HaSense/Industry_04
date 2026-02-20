#include <stdio.h>

int main()
{
    int score[2][3][4] = {
       { {72, 80, 95, 60}, {72, 80, 95, 60}, {72, 80, 95, 60} },
       { {72, 80, 95, 60}, {72, 80, 95, 60}, {72, 80, 95, 60} }
    };
    
    for(int i=0; i<2; i++){
      printf("%d반 점수...\n", i+1);
      for(int j=0; j<3; j++){
        for(int k=0; k<4; k++){
          printf("%5d", score[i][j][k]);
        }
        printf("\n");
      }
      printf("\n");
    }
    return 0;
}
