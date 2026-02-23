#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
   int id;
   char name[20]; //char* name;
   int age;
   char tel[20]; //char* tel;
};
int main()
{
    struct person list[2] = {
      {1, "홍길동", 20, "010-1111-1111"},
      {2, "이순신", 45, "010-2222-2222"}
    };
    struct person *plist = list;

    for(int i=0; i<2; i++) {
      printf("%d\t %10s\t %d\t %15s\n", 
        list[i].id, list[i].name, list[i].age, list[i].tel);
    }

    // for(int i=0; i<2; i++) {
    //   printf("%d\t %10s\t %d\t %15s\n", 
    //     (plist+i)->id, (plist+i)->name, (plist+i)->age, (plist+i)->tel);
    // }
    return 0;
}
