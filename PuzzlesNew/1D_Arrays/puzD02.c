#include <stdio.h>

void printArray(int size, int *arr){
    int i;
    for(i = 0; i < size; i++){
        printf("%3d ", arr[i]);
        if(i%10 == 9){
            printf("\n");
        }
    }
}

int main(int argc, char *argv[]){
    int x[40];
    int i;
    for(i = 0; i < 40; i++){
        x[i] = i+1;
    }

    printArray(40, x);
    printf("\n");

    return 0;
}
