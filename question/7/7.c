#include <stdio.h>
#include "timer.h"
#include "natural_number_judgment.h"

int main(){
    INIT_TIME(s, e)
    START_TIME(s)

    int sequence = 0;
    long i = 2;
    for( ; ; i++){
        if(is_prime(i)){
            if(++sequence == 10001) break;
        }
    }

    END_TIME(s, e, time)

    printf("the 10001th prime is : %ld\n", i);

    return 0;
}