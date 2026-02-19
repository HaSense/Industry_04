#include <stdio.h>

//가장 사랑받는 표준적인 문자열 입력 방식

int main()
{
    char str[80];

    //gets(str); //처음 배울 때만!
    fgets(str, sizeof(str), stdin); //표준

    printf("%s\n", str);

    return 0;
}
