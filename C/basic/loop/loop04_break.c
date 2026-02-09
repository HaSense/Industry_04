#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	//1. 변수를 도구화 할 수 있느냐???
	//  - flag 변수 ==> (청기, 백기), (0,1)
	//  - cnt(count)변수 사용

	int cnt = 1;

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", cnt++);

		if (cnt == 8) break;
	}

	return 0;
}
