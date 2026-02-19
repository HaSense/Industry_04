#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    char *resp;

    printf("2개의 문자열을 입력해 주세요 : ");
    scanf("%s%s", str1, str2);

    if(strlen(str1) > strlen(str2)){
      resp = str1;
    }
    else {
      resp = str2;
    }
    printf("strlen(str1) : %d\n", strlen(str1));
    printf("strlen(str2) : %d\n", strlen(str2));
    printf("이름이 긴 과일은 : %s\n", resp);

    return 0;
}
