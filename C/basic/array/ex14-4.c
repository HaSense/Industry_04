#include <stdio.h>

int main()
{
    char animal1[3][10] = {
      {'d', 'o', 'g', '\0'},
      {'t', 'i', 'g', 'e', 'r', '\0'},
      {'r', 'a', 'b', 'b', 'i', 't', '\0'}
    };

    char animal2[3][10] = {"dog", "tiger", "rabbit"};

    for(int i=0; i<3; i++){
      printf("%s ", animal1[i]);
    }
    putchar('\n');
    for(int i=0; i<3; i++){
      printf("%s ", animal2[i]);
    }

    return 0;
}
