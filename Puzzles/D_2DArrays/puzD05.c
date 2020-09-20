#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMCOLS 15
#define NUMROWS 10

int randInt( int min, int max){
    /*
     * rand()%(max-min+1)+min
     *
     * The following preserves a uniform distribution
     */
    return (rand()*(max-min+1))/(RAND_MAX+1) + min;
}

void print2DArray( int x[][NUMCOLS], int nrows){
    int r,c;
    for( r=0; r<nrows; r++){
        for( c=0; c<NUMCOLS; c++){
            printf("%d ",x[r][c]);
        }
        printf("\n");
    }
}

void randomFill2DArray( int x[][NUMCOLS], int nrows, int low, int high){
    int r,c;
    for( r=0; r<nrows; r++){
        for( c=0; c<NUMCOLS; c++){
            x[r][c]=randInt(low,high);
        }
    }
}

int main( int argc, char *argv[]){
    const int low=10, high=25;
    int x[NUMROWS][NUMCOLS];

    srand( time(NULL));
    randomFill2DArray(x,NUMROWS, low, high);

    print2DArray( x, NUMROWS);

    printf("\n");

    return 0;
}
