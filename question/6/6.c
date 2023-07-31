#include <stdio.h>
#include "timer.h"

#define SUM_OF_SQUARES(n) n * (n + 1) * (2 * n + 1) / 6

int main(){
    INIT_TIME(s, e)
    START_TIME(s)

    long sum_of_squares = SUM_OF_SQUARES(100);
    long squares_of_sum = (1 + 100) * 100 / 2;
    squares_of_sum = squares_of_sum * squares_of_sum;

    END_TIME(s, e, time)

    printf("the difference is : %ld\n", squares_of_sum - sum_of_squares);

    return 0;
}