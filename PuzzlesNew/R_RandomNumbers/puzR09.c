#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double randomDoubleRange(double min, double max){
    return rand() * (max-min)/(RAND_MAX+1.0) + min;
    /*
     * Answer, I like how rand() and RAND_MAX are grouped together.
     */
    /*return (max-min) * (rand()/RAND_MAX +1.0) + min;*/
}
const int N = 1000;
const double target = 51.0;

int main(int argc, char *argv[]){
    srand(time(NULL));
    int i;
    double value, closest = 1000;

    for(i = 0; i < N; i++){
        value = randomDoubleRange(0,100);
        if(fabs(target - value) < fabs(target - closest)){
            closest = value;
        }
    }

    printf("Closest: %lf; difference: %lf\n", closest, fabs(target-closest));

    return 0;
}
