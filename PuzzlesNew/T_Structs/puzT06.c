#include <stdio.h>
#include <stdlib.h>
#include <time.h>



struct Bulb{
    int watts;
    int lumens;
};

#define length 10

void printArray(struct Bulb b[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("Bulb: watts = %d\tlumens = %d\n",   b[i].watts, b[i].lumens );
    }
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    struct Bulb arr[length];

    int i;
    for(i = 0; i < length; i++){
        arr[i].lumens = rand() % 90 + 10;
        arr[i].watts = rand() % 90 + 10;
    }

    printArray(arr, length);

    return 0;
}
