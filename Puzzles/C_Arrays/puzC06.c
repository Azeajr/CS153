#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArrayRandom(int arr[], int size, int low, int high){
    srand(time(NULL));
    int i;
    for(i=0;i<size;i++){
        arr[i]=rand()%(high+1-low)+low;
    }
}


void printArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        if((i+1)%10==0){
            printf("%4d\n", arr[i]);
        }else{
            printf("%4d ", arr[i]);
        }

    }
    printf("\n");
}
int const SIZE = 1000;

int main(int argc, char *argv[]){
    int arr[SIZE];

    fillArrayRandom(arr, SIZE,0,100);
    printArray(arr, SIZE);

    return 0;
}
