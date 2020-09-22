#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Write a function that fills an array with integers, where each integer is
 * larger than its predecessor by a random amount in the range 1..MaxStep.
 * Start the array with a random value between 0 and MaxStep-1.
 */

int randIntRange(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1) + min;
}


void fillArrayRandomAscending(int size, int arr[], int maxStep){
    srand(time(NULL));
    *arr = randIntRange(0, maxStep);
    int i;
    for(i = 1; i < size; i++){
        *(arr + i) = *(arr + i - 1) + randIntRange(1, maxStep);
    }
}

void printIntArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        if(i%10==9){
            printf("%6d\n", arr[i]);
        }else{
            printf("%6d ", arr[i]);
        }
    }
}

const int SIZE = 100;


int main(int argc, char const *argv[]){
    int x[SIZE];

    fillArrayRandomAscending(SIZE, x, 5);
    printIntArray(SIZE, x);

    return 0;
}
