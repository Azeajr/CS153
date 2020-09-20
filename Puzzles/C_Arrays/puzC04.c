#include <stdio.h>
#include <stdlib.h>

void fillArrayAscending(int arr[], int size, int x){
  int i;
  for(i=0;i<size;i++){
    arr[i]=x+i;
  }
}

void printArray(int arr[], int size){
  int i;
  for(i=0; i<size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

const int SIZE = 100;

int main(int argc, char *argv[]){
  int x[SIZE];

  fillArrayAscending(x, SIZE, 7);
  printArray(x,SIZE);

  printf("\n");
  return 0;
}
