#include <stdio.h>
#include "extern_include.h"

int a;
extern int b;
int b = 1;
extern int c;
int x;
int y;

int add(){
    extern int x;
    extern int y;
    x = 1;
    y = 2;
    return x + y;
}

int main(){
    printf("a: %d b: %d\n",a,b);
    //printf("extern int c: %d \n",c);
    printf("x + y: %d x: %d y: %d \n",add(),x,y);
    return 0;
}