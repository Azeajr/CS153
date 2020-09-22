#include <stdlib.h>
#include <time.h>

/*
 * Meant to be compiled with puzD08.c
 */

double randDouble(double min, double max){
    return (double)rand() * (max-min)/((double)RAND_MAX + 1) + min;
}

void fillArrayRandDouble(int size, double arr[], double start, double end){
    srand(time(NULL));

    int i;
    for(i = 0; i < size; i++){
        *(arr+i) = randDouble(start, end);
    }
}
