#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	printf("%c\n", 'A'); //문자 'A'
	printf("%s\n", "A"); //문자열 "A\0" <-- 두 문자 , \0 NULL문자

	printf("%c은 %s입니다.\n", '1', "first");

	printf("%c %d %c %d\n", '0', '0', '1', '1');
	//유니코드(utf-8), 아스키코드(ASCII)
	printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
	printf("%s\n", "Hello"); //"Hello\0"

	return 0;
}
