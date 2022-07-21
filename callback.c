#include <stdio.h>
#include <stdlib.h>

void pop_array(int *array,size_t arraySize,int (*getNextValue)()){
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = getNextValue();
    }
    
}


//回调函数
int nextValue(){
    return rand();
}

int main(){
    int myArray[10];
    pop_array(myArray,10,nextValue);
  
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ",myArray[i]);
    }
    
    printf("\n");
    return 0;
}