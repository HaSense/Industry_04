#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	int arr[5]; //arr[0] ... arr[4] //N-1개까지

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
