#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	//기수값, index
	int i = 0; // 1. 기수값 설정

	while (i < 10) //2. 조건만들기
	{ 
		printf("%d\n", i);
		i++; //기수값의 증가감
	}
	
	return 0;
}
