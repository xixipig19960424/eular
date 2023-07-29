#include <stdio.h>
#include "timer.h"

#define NUM_IN 1000

#if 1
int is_palindrome(int a){
    if(a < 10) return 1;

    char vec[10] = {0};
    int i = 0;

    for( ; a / 10 != 0; i++){
        vec[i] = a % 10;
        a /= 10;
    }
    vec[i] = a;
    
    for(int j = 0; j < (i + 1) / 2; j++){
        if(vec[j] != vec[i-j]) return 0;
    }

    return 1;
}
#else

int is_palindrome(int x) {
    int raw = x, t = 0;
    while (x) {
        t = t * 10 + x % 10;
        x /= 10;
    }
    return raw == t;
}

#endif

int main(){
    INIT_TIME(s, e)
    START_TIME(s)

    int max = 0;

    for(int i = 999; i > 99; i--){
        for(int j = 999; j > 99; j--){
            if(is_palindrome(i * j)){
                max = max < i * j ? i *j : max;
            }
        }
    }

    END_TIME(s, e, time)

    printf("the max palindrome is : %d\n", max);

    return 0;
}