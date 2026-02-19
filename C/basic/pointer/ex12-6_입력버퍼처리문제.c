#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
    long age;
    char *endptr; //에러처리용
    char strAge[10];
    char name[20];

    printf("나이 입력 : ");
    //scanf("%d", &age); //사용금지
    fgets(strAge, sizeof(strAge), stdin);
    //변환
    //age = atoi(strAge);
    age = strtol(strAge, &endptr, sizeof(strAge));

    printf("이름 입력 : ");
    fgets(name, sizeof(name), stdin);
    printf("나이 : %d, 이름 : %s\n", age, name);
 
    return 0;
}
