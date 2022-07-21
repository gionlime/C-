#include <stdio.h>

enum DAY{
  MON = 1,TUE,WED,THE,FRI,SAT,SUN
};

int main(){
    enum DAY day;
    day = THE;
    printf("day value: %d \n",day);
    return 0;
}