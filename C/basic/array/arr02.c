#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	int arr[5]; //arr[0] ... arr[4] //N-1개까지

	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
