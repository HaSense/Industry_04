#include <stdio.h>

int main()
{
    char animal[2][20];
    int cnt;

    cnt = sizeof(animal) / sizeof(animal[0]); //행의 개수를 뽑아내는 공식
    //printf("cnt : %d\n", cnt);
    for(int i=0; i<cnt; i++)
        scanf("%s", animal[i]);   //2번 동작
    
    putchar('\n');
    for(int k=0; k<cnt; k++)
        printf("%s|", animal[k]);

    return 0;
}
