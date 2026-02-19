#include <stdio.h>

int main()
{
    int a = 5;
    int* pa = &a; 
    printf("&a : %p\n", pa); //포인터 변수는 주소를 값으로 한다.
    printf("a의 값 : %d\n", *pa);  //pa값을 따라간 변수 즉, a의 값을 출력!
  
    printf("%p\n", "apple");
    printf("첫번째 문자값 %c\n", *"apple");  
    
    printf("%p\n", "apple"+1);
    printf("다섯번째 문자값 %c\n", *("apple" + 4));  
    
    return 0;
}
