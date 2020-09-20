#include <stdio.h>

void printArray(int size, int arr[]){
    printf("index\tvalue\n-----\t-----\n");
    int i;
    for(i = 0; i < size; i++){
        printf("%4d:\t %4d\n", i, arr[i]);
    }
}

int main(int argc, char *argv[]){
    int x[] = {0, 9, 23, -6, 5, 2, 71, 45, -9, 3};

    printArray(10, x);

    printf("\n");

    return 0;
}
