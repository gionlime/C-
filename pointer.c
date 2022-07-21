#include <stdio.h>

int main(){
   int var = 10;
   int *p;
   int *q = &var;
   p = &var;
printf("p addr: %p\n",p);
    printf("*p value: %d\n",*p);
    printf("q addr: %p\n",q);
    printf("*q vallue: %d\n",*q);
    
    return 0;
}