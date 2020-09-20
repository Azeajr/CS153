#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randInt(int min, int max){
    /*return rand() % (max - min + 1) + min;*/
    return ((long)rand()*(max-min+1))/((long)RAND_MAX+1)+min;
}

void fillArray(int size, int arr[], int start, int end){
    srand(time(NULL));

    int i;
    for(i = 0; i < size; i++){
        *(arr + i) = randInt(start, end);
    }
}

void printArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        printf("%4d ", *(arr+i));
        if(i % 10 == 9) printf("\n");
    }
}
const int SIZE = 100;

int main(int argc, char *argv[]){

    int x[SIZE];
    fillArray(SIZE, x, 0, 100);
    printArray(SIZE,x);
    printf("\n");

    return 0;
}
