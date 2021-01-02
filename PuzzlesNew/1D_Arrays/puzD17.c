/**
 * @file puzD17.c
 * @author Antonio Zea
 * @brief Write a function that has three integer arrays as argments. The 
 * function multiplies corresponding elements of two of first two arrays to 
 * compute the elements of the third array. All three arrays are the same size.
 * @version 0.1
 * @date 2021-01-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

void multMergeArray(int size, int a[], int b[], int c[]){
    int i;
    for(i = 0; i < size; i++){
        *(c + i) = *(a + i) * *(b + i);
    }
}

void fillArrayInOrder(int size, int arr[], int start){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = i + start;
    }
}

void fillArrayDescending(int size, int arr[], int start){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = start - i;
    }
}

void printArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        if(i%10 == 9){
            printf("%4d\n", arr[i]);
        }else{
            printf("%4d ", arr[i]);
        }
    }
    printf("\n\n");
}

#define SIZE 25

int main(int argc, char const *argv[])
{
    int x[SIZE], y[SIZE], z[SIZE];

    fillArrayInOrder(SIZE, x, 0);
    fillArrayDescending(SIZE, y, 11);
    multMergeArray(SIZE, x, y, z);
    printArray(SIZE, x);
    printArray(SIZE, y);
    printArray(SIZE, z);

    return 0;
}
