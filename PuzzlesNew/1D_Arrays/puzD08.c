#include <stdio.h>
#include <stdlib.h>

/*
 * Meant to be compiled with puzD07.c
 */

void fillArrayRandDouble(int size, double arr[], double start, double end);

void printArrayDouble(int size, double arr[]){
    int i;
    for(i = 0;  i < size; i++){
        printf("%4lf ", *(arr+i));
        if(i % 10 == 9) printf("\n");
    }
}

const int SIZE = 100;

int main(int argc, char const *argv[]){
    double x[SIZE];
    fillArrayRandDouble(SIZE, x, 0.0, 10.0);
    printArrayDouble(SIZE, x);
    printf("\n");

    return 0;
}
