#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Write a function that adds up only the odd integers in an array. Remember
 * that negative integers can be odd.
 */

long addArray(int size, int arr[]){
    long sum = 0;

    int i;
    for(i = 0; i < size; i++){
        if(arr[i]%2){
            sum += arr[i];
        }
    }

    return sum;
}

void printArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        if(i % 10 == 9){
            printf("%4d\n", arr[i]);
        }else{
            printf("%4d ", arr[i]);
        }
    }
}

#define SIZE 10

int main(int argc, char const *argv[]) {
    int x[ SIZE ] = { 0, 2, 1, -3, -5, 2, 4, 6, 9, 60};

    printArray( SIZE, x );
    printf("\n");
    printf("sum = %ld\n", addArray( SIZE, x ) );


    return 0;
}
