#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int score[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//출력 2 4 6 8 10 만 나오려면 어떻게 코딩???
	//1. 값기준    2.index (0)

	for (int i = 0; i < 10; i++) {
		if (score[i] % 2 == 0)
			printf("%d ", score[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 1)
			printf("%d ", score[i]);
	}
	printf("\n");
	for (int i = 1; i < 10; i+=2) {
		printf("%d ", score[i]);
	}
	printf("\n");

	return 0;
}
