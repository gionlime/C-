#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    data.i = 10;
    data.f = 225.5;
    strcpy(data.str,"C Program");
    printf("mem size of data: %lu\n",sizeof(data));
    printf("data.i: %d     data.f: %f    data.str: %s\n",data.i,data.f,data.str);
}