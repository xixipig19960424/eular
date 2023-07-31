#include "natural_number_judgment.h"

int is_prime(long a){
    if(a < 2) return 0;
    else if(a == 2) return 1;

    long threthold = a;
    long i = 2;
    long max = 0;

    while(i < threthold){
        if(a % i == 0) {
            return 0;
        }

        threthold = (a / i + 1);
        i++;
    }

    return 1;
}
