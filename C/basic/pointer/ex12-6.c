#include <stdio.h>

int main()
{
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);
    
    //코드추가
    //getchar(); //해법 - 기법
    //scanf("%*c");
    //fgetc(stdin);

    printf("이름 입력 : ");
    fgets(name, sizeof(name), stdin);
    printf("나이 : %d, 이름 : %s\n", age, name);
 
    return 0;
}
