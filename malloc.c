#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char name[100];
    char *desc;

    strcpy(name,"lijunjun");

    //动态内存分配
    desc = (char *)malloc(200 * sizeof(char));
    if (desc == NULL){
        printf("malloc mem faiure");/* code */
    }else{
        strcpy(desc,"malloc desc test");
    }
    
    printf("name is: %s\n",name);
    printf("desc is: %s\n",desc);

   return 0;
}