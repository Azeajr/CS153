#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double randomDoubleRange(double min, double max){
    return rand() * (max-min)/(RAND_MAX+1.0) + min;
    return(max-min) * (rand()/(RAND_MAX+1.0)) + min;
}

const double epsilon = 1.0e-2;
const double low = 0.0, hi = 100.0;
const double target = 50.0;
const int limit = 10000000;

int main(int argc, char *argv[]){
    srand(time(NULL));
    double diff,value;
    int i = 0;
    do{
        i++;
        value = randomDoubleRange(low,hi);

        if((diff = fabs(target - value)) < epsilon){
            printf("Target: %lf;  Epsilon: %lf \nClosest value: %lf; occurred on trial: %d\n", target, epsilon, value, i);
        }
    } while(diff > epsilon  && i < limit);

    return 0;
}
