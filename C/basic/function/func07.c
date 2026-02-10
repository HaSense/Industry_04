#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int plus(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int multiple(int a, int b) {
	return a * b;
}
double divide(int a, int b) {
	return (double)a / b;		// 정수 / 실수 --> 실수가 출력된다. 캐스팅연산자 사용
}
int main()
{
	int a = 7, b = 5;
	printf("+ : %d\n", plus(a, b));
	printf("- : %d\n", minus(a, b));
	printf("* : %d\n", multiple(a, b));
	printf("/ : %.1lf\n", divide(a, b));

	return 0;
}

