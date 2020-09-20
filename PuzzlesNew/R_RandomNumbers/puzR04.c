#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int TOTALTRIALS = 10000000;

int randInt(int min, int max){
    return ((long)rand()*(max-min+1))/((long)RAND_MAX+1)+min;
}

void histogram(int size, int arr[]){
    int i;
    for(i = 0; i < size; i++){
        printf("%3d: %8d\n", i, *(arr +i));
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));

    int trials[10] = {0};

    int i;
    for(i = 0; i < TOTALTRIALS; i++){
        (*(trials + randInt(0,9)))++;
    }

    histogram(10, trials);

    return 0;
}
