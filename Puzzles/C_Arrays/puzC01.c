#include <stdio.h>

void printArray(int arr[], int size){
    int i;
    printf("index\tvalue\n-----\t-----\n");
    
    for(i=0;i<size;i++){
        printf("%4d:\t%5d\n",i,arr[i]);
    }
}

int main(int argc, char *argv[]){
    int x[] = {0, 9, 23, -6, 5, 2, 71, 45, -9, 3 };
    
    printArray( x, 10 );
    printf("\n");
    return 0;
}