#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char temp[80];
  char *str[3]; //Heap 공간에 문자 배열을 만들었다.
  char *str2 = "Hi"; //문자열 상수
  char *str3 = "Hi";
  int a = 10;
  int b = 10;

  for(int i=0; i<1; i++){
    printf("문자열을 입력하세요.");
    //gets(temp);
    fgets(temp, sizeof(temp), stdin);
    str[i] = (char *)malloc(strlen(temp) + 1); //'\0'문자 포함 때문에 +1 했음!
    strcpy(str[i], temp);
  }

  printf("str : %p\n", str);
  printf("str2 : %p\n", str2);
  printf("str3 : %p\n", str3);
  printf("&a : %p\n", &a);
  printf("&b : %p\n", &b);

  //출력 & free
  for(int i=0; i<1; i++){
    printf("%s\n", str[i]);
    free(str[i]);
  }
  
  return 0;
}
