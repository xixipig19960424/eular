#include <stdio.h>
#include "timer.h"

#define NUM_IN 600851475143

long int is_prime(long int a){
    if(a == 1 || a == 2) return 1;

    long int threthold = a;
    long int i = 2;
    long int max = 0;

    while(i < threthold){
        if(a % i == 0) {
            return 0;
        }

        threthold = (a / i + 1);
        i++;
    }

    return 1;
}

int main(){
    INIT_TIME(s, e)
    START_TIME(s)
    
    long int threthold = NUM_IN;
    long int i = 2;
    long int max = 0;
    while(i < threthold){
        if(NUM_IN % i == 0) {
            if(is_prime(i)){
                max = i;
            }
        }
        
        threthold = (NUM_IN / i + 1);
        i++;
    }
    END_TIME(s, e, time)

    printf("the max prime is : %ld\n", max);

    return 0;
}