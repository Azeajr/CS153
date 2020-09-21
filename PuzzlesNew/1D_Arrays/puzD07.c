#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randDouble(double min, double max){
    return (double)rand()/((double)RAND_MAX+1);
}

void fillArray(int size, double arr[], double start, double end){
    srand(time(NULL));

    int i;
    for(i = 0; i < size; i++){
        *(arr+i) = randDouble(start, end);
    }
}

void printArray(int size, double arr[]){
    int i;
    for(i = 0;  i < size; i++){
        printf("%4lf ", *(arr+i));
        if(i % 10 == 9) printf("\n");
    }
}

const int SIZE = 100;

int main(int argc, char const *argv[]){
    double x[SIZE];
    fillArray(SIZE, x, 0.0, 10.0);
    printArray(SIZE, x);
    printf("\n");

    return 0;
}
