/*
 * Compute the sum of the absolute value of the difference between each array
 * element and its index. Write a function that, for each element a[j],
 * adds |a[j]-j| to a sum. Use an array of integers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int addArray( int size, int arr[]){
    int sum = 0;

    int i;
    for(i = 0; i < size; i++){
        if( arr[i] > i){
            sum += arr[i] - i;
        }else{
            sum += i - arr[i];
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

int main(int argc, char const *argv[]){
    int x[SIZE]= {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};

    printArray(SIZE, x);
    printf("\n");
    printf("sum = %d\n", addArray( SIZE, x ) );

    return 0;
}