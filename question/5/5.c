#include <stdio.h>
#include "timer.h"

#if 0
long calculation_multiple(long a, long b){
    if(a == b) return a;
    long max = a > b ? a : b;
    long min = a > b ? b : a;

    int times = 2;
    int temp = max;

    while(temp % min != 0){
        temp = max * times;
        times++;
    }

    return temp;
}
#else
long gcb(long a, long b){
    if(a == b) return a;

    long max = a > b ? a : b;
    long min = a > b ? b : a;

    int times = 2;

    while(times <= max){
        if(max % times == 0 && min % (max / times) == 0){
            break;
        }
        
        times++;
    }

    return max / times;
}

long calculation_multiple(long a, long b){
    return a * b / gcb(a, b);
}
#endif


int main(){
    INIT_TIME(s, e)
    START_TIME(s)

    long temp = 1;
    
    for(int i = 1; i < 20; i++){
        temp = calculation_multiple(temp , i + 1);
    }

    END_TIME(s, e, time)

    printf("1 - 20 multiple is : %ld\n", temp);

    return 0;
}