#include <stdio.h>

int main(){
    int n[10];

    for(int i =0;i < 10;i++){
        n[i] = i + 100;
    }

    for(int j = 0;j < 10;j ++){
        printf("element[%d] = %d",j,n[j]);
    }
}