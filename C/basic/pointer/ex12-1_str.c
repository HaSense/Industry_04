#include <stdio.h>

/* 문자열은 Stack이 아닌 global 변수 근처에서 만들어지는 것을 확인하세요. */

char ch = 'A';
int main()
{
    printf("%s\n", "apple");  
    printf("%p\n", "apple");
    printf("%p\n", &ch);
    
    int a = 10;
    double b = 3.14;
    printf("\n&a = %p\n", &a);
    printf("&b = %p\n", &b);
     
    return 0;
}
