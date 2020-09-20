#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randNumBetween(int min, int max){
    return rand()%(max-min) + min;
}

void fillArrayRandomAscending( int arr[], int size, int maxStep ){
    int i, sum=0;

    arr[0]=randNumBetween(0,maxStep-1);

    for(i=1;i<size;i++){

        arr[i]=arr[i-1] + randNumBetween(1,maxStep);
        /*
         * My solution below.  It assumes that the for loop
         * starts at 0.  I included the perscribed solution
         * due to its elegance.
         */
        /*if(i==0){
            sum+=randNumBetween(0,maxStep-1);
            arr[i]=sum;
        }else{
            sum+=randNumBetween(1,maxStep);
            arr[i]=sum;
        }*/
    }
}

void printArray(int arr[], int size){
    int i;
    int const N=10;

    for(i=0; i< size; i++){
        if((i+1)%N==0){
            printf("%4d\n", arr[i]);
        }else{
            printf("%4d ", arr[i]);
        }
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int const SIZE=100;

    int arr[SIZE];

    fillArrayRandomAscending(arr,SIZE,10);
    printArray(arr,SIZE);
}
