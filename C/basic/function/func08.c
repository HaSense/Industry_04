#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void print_line(char ch, int cnt);

int main()
{
	print_line('*', 50);
	printf("학번        이름        전공        학점\n");
	print_line('*', 50);

	return 0;
}
void print_line(char ch, int cnt)
{	//코딩하세요.
	for (int i = 0; i < cnt; i++) {
		printf("%c", ch);
	}
	printf("\n");
}
