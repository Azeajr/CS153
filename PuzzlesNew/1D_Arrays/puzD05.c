#include <stdio.h>

void fillArray(int size, int arr[], int start){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = start - i;
    }
}

void printArray(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        printf("%4d ",*(arr+i));
        if(i%10 == 9) printf("\n");
    }
}

const int SIZE = 100;

int main(int argc, char *argv[]){
    int x[SIZE];
    fillArray(SIZE, x, 7);
    printArray(SIZE, x);

    printf("\n");

    return 0;
}
