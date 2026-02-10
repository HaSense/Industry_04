#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	//"Hello World!"
	char greet[13];

	greet[0] = 'H';	greet[1] = 'e';
	greet[2] = 'l';	greet[3] = 'l';
	greet[4] = 'o';	greet[5] = ' ';
	greet[6] = 'W';	greet[7] = 'o';
	greet[8] = 'r';	greet[9] = 'l';
	greet[10] = 'd'; greet[11] = '!';
	greet[12] = '\0'; //문자, 문자열 구분에서는 중요!!!
	
	for (int i = 0; i < 12; i++) {
		printf("%c", greet[i]);	//문자 찍기
	}
	printf("\n");
	//문자열
	printf("%s\n", greet);

	return 0;
}
