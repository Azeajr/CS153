/*
 * Write a function that prints every N'th integer of an array starting with 
 * element 0. This might be used to look at a big array when you just want to 
 * check that all the elements are there.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randIntRange(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1);
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

void printNIntArray(int size, int arr[], int N){
    int i;
    for(i = 0; i < size; i += N){
        if(i%(10 * N) == 9*N){
            printf("%6d\n", arr[i]);
        }else{
            printf("%6d ", arr[i]);
        }
    }
}

/*
 * A more elaborate function would randomly skip forward an amount 0..N for 
 * each element it prints.
 */

void printRandNIntArray(int size, int arr[], int N){
    srand(time(NULL));
    int i,j;
    for(i = j = 0; i < size; i++, j += randIntRange(1, N)){
        if(i%10 == 9){
            printf("%6d\n", arr[j]);
        }else{
            printf("%6d ", arr[j]);
        }
    }
}

#define SIZE 100

int main(int argc, char const *argv[])
{
    int x[SIZE] = {0};
    fillArrayRandomAscending(SIZE, x, 10);
    printIntArray(SIZE, x);
    printf("\n\n");
    printNIntArray(SIZE, x, 4);
    printf("\n\n");


    return 0;
}
