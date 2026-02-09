#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	// 3 * 1  ... 3 * 9
	int dan = 5;
	int i = 0;	//i(ndex), j, k, l, m, n ...

	while (i < 9) {
		i++;
		printf("%d * %d = %d\n", dan, i, dan*i);
	}
	printf("\n\n");

	for (int k = 1; k < 10; k++) {
		printf("%d * %d = %d\n", dan, k, dan*k);
	}

	return 0;
}
