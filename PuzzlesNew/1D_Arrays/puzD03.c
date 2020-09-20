#include <stdio.h>

void fillArrayConst(int size, int arr[], int x){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = x;
    }
}

void printArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        printf("%3d ", arr[i]);
        if(i % 10 == 9){
            printf("\n");
        }
    }
}

const int SIZE = 100;
int main(int argc, char *argv[]){
    int x[SIZE];

    fillArrayConst(SIZE, x, 7);
    printArray(SIZE, x);

    printf("\n");

    return 0;
}
