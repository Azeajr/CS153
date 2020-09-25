#include <stdio.h>
/*
 * Write a function that computes the sum of all the elements in an array of
 * integers. A related problem is to compute the average of the elements in an
 * array, but that is just a small change to this function.
 */

long addArray(int size, int arr[]){
    long sum = 0;

    int i;
    for(i = 0; i < size; i++){
        sum += arr[i];
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
    int x[SIZE] = { -1, 1, -2, 2, -3, 3, -4, 4, -5, 5 };

    printArray(SIZE, x);
    printf("\n");
    printf("sum = %ld\n", addArray( SIZE, x ) );

    return 0;
}
