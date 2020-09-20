#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));

    /*
     * This is the solution I came up with that only uses
     * one loop but ends up using long long integers.
     */
    #if 0
    long long n = 1;

    long long i, j;

    for(i = 0, j = 0; i < n * RAND_MAX; i++){
        if(rand() == RAND_MAX){
            j++;
        }
    }
    #endif

    int n = 10;

    int count = 0;

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < RAND_MAX; j++){
            if(rand() == RAND_MAX){
                count++;
            }
        }
    }

    printf("%3d\n", count);

    return 0;
}
