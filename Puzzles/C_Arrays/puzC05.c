#include <stdio.h>

void fillArrayDescending(int arr[], int size, int x){
  int i,j=x;
  for(i=0;i<size;i++){
    arr[i]=x-i;


    /*
    if(j<0){
      j=x;
    }
    arr[i]=j;
    j--;
    */


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
}

const int SIZE = 100;

int main(int argc, char *argv[]){
  int x[SIZE];

  fillArrayDescending(x, SIZE, 7);
  printArray(x,SIZE);

  printf("\n");
  return 0;
}
