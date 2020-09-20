#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n);

int main(int argc, char *argv[]){
    srand(time(NULL));
    int i, sample[10];
    for(i = 0; i < 10; i++){
        sample[i] = rand()%90 + 10;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", sample[i]);
    }
    printf("\n");

    selectionSort(sample,10);

    for(i = 0; i < 10; i++){
        printf("%d ", sample[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    for(i = 0; i < n-1; i++){
        min_idx = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        /*
         * Swaps values in the array
         */
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
