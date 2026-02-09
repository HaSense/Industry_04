#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	for (int i = 2; i < 10; i++) 
	{
		for (int k = 1; k < 10; k++)
		{
			printf("%d * %d = %d\n", i, k, i * k);
		}
	}
	printf("\n\n");

	for (int m = 9; m >= 2; m--)
	{
		for (int n = 9; n > 0; n--) {
			printf("%d * %d = %d\n", m, n, m * n);
		}

	}


	return 0;
}











