#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void myPrint(int a, char b)
{
	printf("Hello World! : %d %c\n", a, b);
}
int main()
{
	myPrint(7, 'A');
	return 0;
}

