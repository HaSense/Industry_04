#include <stdio.h>

int main()
{
    int n = 5;
    int dp[6];

    dp[0] = 1; //저장되어 있는 값

    for(int i=1; i<=n; i++){
      dp[i] = i * dp[i-1];   //점화식!!!
      printf("%d : %d\n", i, dp[i]);
    }
  return 0;
}
