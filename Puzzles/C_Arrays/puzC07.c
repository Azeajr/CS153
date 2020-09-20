#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double randomBetween(double low, double high){
    /*
     * (double)rand()/(double)(RAND_MAX)
     * produces a random double between 0.0 and 1.0 inclusive
     *
     * (double)rand()/((double)(RAND_MAX)+(double)1)
     * produces a random double between [0.0, 1.0)
     */
    return (rand()*(high-low))/(RAND_MAX+1) + low;
}

void fillArrayRandDouble(double arr[], int size, double low, double high){
    int i;
    for(i=0; i<size; i++){
        arr[i]=randomBetween(low,high);
    }
}

void printDoubleArray(double arr[], int size){
    int const N=5;
    int i;
    for(i=0;i<size;i++){
        if((i+1)%N==0){
            printf("%8.4lf\n", arr[i]);
        }else{
            printf("%8.4lf ", arr[i]);
        }
    }
}

int const SIZE=100;

int main(int argc, char *argv[]){
    srand(time(NULL));

    double arr[SIZE];

    fillArrayRandDouble(arr,SIZE,0.0,10.0);
    printDoubleArray(arr,SIZE);
}
