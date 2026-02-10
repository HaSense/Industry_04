#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int myPrint(int a, char b)
{
	printf("Hello World! : %d %c\n", a, b);

	return 800;
}
int main()
{
	int value = myPrint(7, 'A');
	printf("return value : %d\n", value);
	return 0;
}

