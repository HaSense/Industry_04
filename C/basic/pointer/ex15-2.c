#include <stdio.h>

//void swap_ptr(char *ppa, char **ppb); //함수헤더
void swap_ptr(char **ppa, char **ppb) //함수구현
{
   char* temp;

   temp = *ppa;
   *ppa = *ppb;
   *ppb = temp;
}

int main()
{
    char* pa = "success";
    char* pb = "failure";

    printf("pa : %s, pb : %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa : %s, pb : %s\n", pa, pb);

    return 0;
}
