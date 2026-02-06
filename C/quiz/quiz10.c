#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i = 1;
	int dan = 3;

	while (i < 10)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}
	printf("\n");
	dan = 5;
	// i, j, k, l, m, n
	for (int k = 1; k < 10; k++) {
		printf("%d * %d = %d\n", dan, k, dan * k);
	}

	return 0;
}
