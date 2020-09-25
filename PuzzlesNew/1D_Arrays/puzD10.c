#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randDouble(double min, double max){
    return (double)rand() * (max-min)/((double)RAND_MAX + 1) + min;
}

int fillDoubleArrayRandomAscending(int size, double arr[], double avg, double dev){
    srand(time(NULL));

    *arr = randDouble(avg-dev, avg+dev);

    int i;
    for(i = 1; i < size; i++){
        *(arr + i) = *(arr + i - 1) + randDouble(avg-dev, avg+dev);
    }
}

void printDoubleArray(int size, double arr[]){
    int i;
    for(i = 0; i < size; i++){
        if(i%5 == 4){
            printf("%lf\n", *(arr + i));
        }else{
            printf("%lf ", *(arr + i));
        }
    }
}

const int SIZE = 100;

int main(int argc, const char *argv[]){
    double x[SIZE];

    fillDoubleArrayRandomAscending(SIZE, x, 1.0, 1.5);
    printDoubleArray(SIZE, x);

    return 0;
}
