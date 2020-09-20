#include <stdio.h>
#include <stdlib.h>

void fillArrayConst(int arr[], int size, int x){
int i;
  for(i=0;i<size;i++){
    arr[i]=x;
  }
}
void printArray(int arr[], int size){
  const int N = 10;
  int i;
  for(i=0;i<size;i++){
    if(i%N==N-1){
      printf("4%d\n", arr[i]);
    }else{
      printf("4%d ", arr[i]);
    }
  }
  printf("\n");
}

const int SIZE = 100;

int main(int argc, char *argv[]){
  int x[SIZE];

  fillArrayConst(x, SIZE, 7);
  printArray(x,SIZE);

  printf("\n");
  return 0;
}
