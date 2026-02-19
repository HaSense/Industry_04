#include <stdio.h>
#include <string.h>

int main()
{
    int cntBig=0, cntSmall=0, cntNum=0, cntSpecial=0;
    char str[120];

    scanf("%s", str);

    //조건비교
    for(int i=0; i<strlen(str); i++){
      //4가지 cnt조건
      if(str[i] >= 'A' && str[i] <= 'Z') cntBig++;
      else if(str[i] >= 'a' && str[i] <= 'z') cntSmall++;
      else if(str[i] >= '0' && str[i] <= '9') cntNum++;
      else cntSpecial++;
    }
    
    printf("대문자 개수 : %d\n", cntBig);
    printf("소문자 개수 : %d\n", cntSmall);
    printf("숫자 개수 : %d\n", cntNum);
    printf("특수문자 개수 : %d\n", cntSpecial);

    return 0;
}
