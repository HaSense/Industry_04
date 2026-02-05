#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int C;
	double F;

	printf("섭씨 온도를 입력하세요 : ");
	scanf("%d", &C);

	F = ((double)9 / 5.0) * C + 32; //정수/정수-->정수  정수/실수, 실수/실수

	printf("화씨 온도 : %.1lf", F);
	return 0;
}
