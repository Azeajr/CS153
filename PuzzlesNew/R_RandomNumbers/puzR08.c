#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randDouble(int min, int max){
    return (double)rand() * (max-min)/((double)RAND_MAX + 1) + min;
}

const int trials = 1000000;
const double low = 5.0;
const double high = 10.0;

int main(int argc, char *argv[]){
    srand(time(NULL));

    double randValue;
    int i;
    for(i = 0; i < trials; i++){
        randValue = randDouble(low, high);
        printf(" %lf", randValue);
        if(randValue >= high || randValue < low){
            printf("\n***\n");
        }
        if(i % 5 = 4){
            printf("\n");
        }
    }

    return 0;
}
