/**
 * @file puzD18.c
 * @author Antonio Zea
 * @brief Write a function that inspects each integer of an array and changes 
 * the odd integers to even integers. Add -1 to odd integers less than one; add 
 * +1 to odd integers more than one.
 * @version 0.1
 * @date 2021-01-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void evenArray(int size, int arr[]){
    for(int i = 0; i < size; i++){
        if(arr[i]%2 == -1){
            arr[i] -= 1;
        }else if(arr[i]%2 == 1){
            arr[i] += 1;
        }
    }
}

int randInt(int min, int max){
    /*return rand() % (max - min + 1) + min;*/
    return ((long)rand()*(max-min+1))/((long)RAND_MAX+1)+min;
}

void fillArrayInOrder(int size, int arr[], int start){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = i + start;
    }
}

void printArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        printf("%4d ", *(arr+i));
        if(i % 10 == 9) printf("\n");
    }
    printf("\n");
}
const int SIZE = 100;


int main(int argc, char const *argv[])
{
    int x[SIZE];
    fillArrayInOrder(SIZE, x, -SIZE/2);
    printArray(SIZE, x);
    evenArray(SIZE, x);
    printArray(SIZE, x);

    printf("\n%d\n", -45%2);

    return 0;
}
