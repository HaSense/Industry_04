#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int sum(int x, int y)
{
	int temp = x + y;
	return temp;
}
int main()
{
	int a = 10, b = 20;

	int result = sum(a, b);

	printf("result : %d\n", result);

	return 0;
}
