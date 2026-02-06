#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int score1, score2, score3; //철수 영희 민수
	printf("철수 : ");
	scanf("%d", &score1);
	printf("영희 : ");
	scanf("%d", &score2);
	printf("민수 : ");
	scanf("%d", &score3);

	
	if (score1 > score2 && score1 > score3) {
		printf("1등은 철수(%d점)\n", score1);
	}
	else if (score2 > score1 && score2 > score3) {
		printf("1등은 영희(%d점)\n", score2);
	}
	else {
		printf("1등은 민수(%d점)\n", score3);
	}

	return 0;
}





