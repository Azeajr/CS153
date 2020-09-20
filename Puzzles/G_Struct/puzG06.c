#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

#define length 10
/*
 * First time I wrote this I used *arr which ends up being equivalent
 * as far as I know.
 */
void printArray(struct Bulb arr[], int size){
    int i;
    
    for(i=0;i<size;i++){
        printf("Watts: %d\tLumens: %d\n",arr[i].watts,arr[i].lumens);
    }
}

int main(int argc, char *argv[]){
    struct Bulb bulbs[length]={{100,1020},{20,900},
                            {60,1000},{60,1100},
                            {100,1020},{20,900},
                            {60,1000},{60,1100},
                            {10,1500},{100,3000}};
    
    printArray(bulbs,length);
}