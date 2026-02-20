#include <stdio.h>

void print_str(char** animal, int count)
{
   for(int i=0; i<count; i++){
    printf("%s\n", animal[i]);
   }
}
int main()
{
    char* animal[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;

    count = sizeof(animal) / sizeof(animal[0]); //공식 (배열 요소의 개수)
    printf("count : %d\n", count);
    print_str(animal, count);

    return 0;
}
