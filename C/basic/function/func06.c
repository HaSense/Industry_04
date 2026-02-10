#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

double myPrint(int a, char b)
{
	printf("Hello World! : %d %c\n", a, b);

	return 3.141592;
}
int main()
{
	double value = myPrint(7, 'A');
	printf("return value : %lf\n", value);
	return 0;
}

