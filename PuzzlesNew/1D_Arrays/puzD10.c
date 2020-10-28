#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Write a function that fills an array with a sequence of double precision
 * floats. Each float is greater than its predecessor by an average amount avg,
 * but may be greater or less than avg by up to but not including an amount dev.
 * In other words, the amount inc added to one element to get the next is in the
 * range (avg-dev)< inc < (avg+dev).
 *
 * Start the array with a value (avg-dev)< arr[0]< (avg+dev).
 */

double randDouble(double min, double max){
    return (max-min) * (rand()/(RAND_MAX+1.0)) + min;
    /*
     * I like the above because it groups rand and RAND_MAX together
     * return (double)rand() * (max-min)/((double)RAND_MAX + 1) + min;
     */
}

int randInt(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1) + min;
}

void fillDoubleArrayRandomAscending(int size, double arr[], double avg, double dev){
    /*
     * I would probably rewrite these next five lines as its own function
     */
    double inc = randDouble(0.0, dev);

    if(randInt(0,1)){
        inc = -inc;
    }

    arr[0] = avg + inc;

    int i;
    for(i = 1; i < size; i++){
        inc = randDouble(0.0, dev);

        if(randInt(0,1)){
            inc = -inc;
        }

        arr[i] = arr[i-1] + avg + inc;
    }
}

void printDoubleArray(int size, double x[]){
    int i;
    for(i = 0; i < size; i++){
        if(i % 5 == 4){
            printf("%8.4lf\n", x[i]);
        } else {
            printf("%8.4lf ", x[i]);
        }
    }
    printf("\n");
}

const int SIZE = 100;

int main(int argc, const char *argv[]){
    double x[SIZE];

    fillDoubleArrayRandomAscending(SIZE, x, 1.0, 1.5);
    printDoubleArray(SIZE, x);

    return 0;
}
