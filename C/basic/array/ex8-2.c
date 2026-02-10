#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int score[3];  //성적, 순서는 국어, 영어, 수학
	int total = 0;   //총점 , 변수초기화 문제
	double avg = 0.0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &score[i]);
		total += score[i];
	}

	printf("%d %d %d\n", score[0], score[1], score[2]);
	printf("평균 : %.1lf", total / 3.0);


	return 0;
}
