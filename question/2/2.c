#include <stdio.h>
#include "timer.h"

#define NUM_MAX 4000000
#define NUM_START_1 1
#define NUM_START_2 2

int main(){
    INIT_TIME(s, e)
    START_TIME(s)
    
    int mark1 = NUM_START_1;
    int mark2 = NUM_START_2;
    int mark = 0;
    int sum = 2;

    do{
        mark = mark1 + mark2;
        if(mark > NUM_MAX) break;
        if(mark % 2 == 0 ){
            sum += mark;
        }
        mark1 = mark2;
        mark2 = mark;
    }while(1);

    END_TIME(s, e, time)

    printf("the sum is : %d\n", sum);

    return 0;
}