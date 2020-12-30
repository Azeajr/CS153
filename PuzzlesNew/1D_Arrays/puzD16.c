/**
 * @file puzD16.c
 * @author Antonio Zea
 * @brief Write a function that muliplies every element in its argument array 
 * by an integer scale factor.
 * @version 0.1
 * @date 2020-12-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

void scaleArray(int size, int arr[], int factor){
    int i;
    for(i = 0; i < size; i++){
        arr[i] *= factor;
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

int main(int argc, char const *argv[])
{
    int x[10] = {0,1,2,3,4,5,6,7,8,9};

    printIntArray(10, x);
    scaleArray(10, x, 23);
    printIntArray(10, x);

    return 0;
}
