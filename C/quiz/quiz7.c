#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	// 국어, 영어, 수학 3정수 성적입력 
	// 총점, 평균
	int kor, eng, math;
	int total_score;
	double avg;
	//1.입력
	scanf("%d %d %d", &kor, &eng, &math);
	//2. 로직
	total_score = kor + eng + math;
	avg = total_score / 3.0;
	//3. 출력
	//   총점:
	printf("총점 : %d\n", total_score);
	printf("평균 : %.2lf\n", avg);

	//   평균:

	

	return 0;
}
