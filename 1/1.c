#include <stdio.h>
#include <math.h>

#define NUM_1 3
#define NUM_2 5
#define NUM_LCM LCM(NUM_1, NUM_2)
#define NUM_MAX 999

int LCM(int a, int b){
    if(a == b) return a;
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    for(int i = 1; ;i++){
        if(max * i % min == 0){
            return max * i;
        }
    }
}

int main(){
    int num_3 = (NUM_1 + NUM_MAX / NUM_1 * NUM_1) * (NUM_MAX / NUM_1) / 2;
    int num_5 = (NUM_2 + NUM_MAX / NUM_2 * NUM_2) * (NUM_MAX / NUM_2) / 2;
    int num_15 = (NUM_LCM + NUM_MAX / NUM_LCM * NUM_LCM) * (NUM_MAX / NUM_LCM) / 2;

    printf("The sum is : %d\n", num_3 + num_5 - num_15);

    return 0;
}