#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int age;
	printf("age : ");
	scanf("%d", &age);

	if (age >= 65) {
		printf("무료\n");
	}
	else if (age >= 13) {
		printf("10000원\n");
	}
	else {
		printf("5000원\n");
	}

	return 0;
}
