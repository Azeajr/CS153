#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMCOLS 15
#define NUMROWS 10

int randInt( int min, int max){
    return (rand()*(max-min+1))/(RAND_MAX+1) + min;
}
void print2DArray( int x[][NUMCOLS], int nrows){
    int r,c;
    for( r=0; r<nrows; r++){
        for( c=0; c<NUMCOLS; c++){
            printf("%d ", x[r][c]);
        }
        printf("\n");
    }
}
void randomFill2DArray ( int x[][NUMCOLS], int nrows, int low, int high){
    int r,c;

    for( r=0; r<nrows; r++){
        for( c=0; c<NUMCOLS; c++){
            x[r][c] = randInt( low, high);
        }
    }
}

/*
 * The following is what I orignally thought the question was asking.
 * It ssems that I should probably finish the C_Arrays section before
 * proceeding with D_2DArrays.
 */

/*long somefunction( int *x, int nrows, int ncols){
    int r,c;
    long sum=0;

    for(r=0; r<nrows; r++){
        for(c=0; c<ncols; c++){
            //printf("%d ",*(x+ncols*r+c));
            sum +=*(x+ncols*r+c);
        }
    }

    return sum;
}*/

long sum2DArray( int x[][NUMCOLS], int nrows){
    int r,c;
    long sum=0;

    for(r=0; r<nrows; r++){
        for(c=0; c<NUMCOLS; c++){
            sum += x[r][c];
        }
    }

    return sum;
}

long sum1DArray( int arr[], int size ){
  int j;
  long sum = 0;

  for ( j=0; j<size; j++ )
    sum += arr[j] ;

  return sum;
}

int main( int argc, char *argv[]){
    const int low = 0, high = 5;

    int x[NUMROWS][NUMCOLS];
    long sumA, sumB;

    srand( time(NULL));
    randomFill2DArray( x, NUMROWS, low, high);

    print2DArray( x, NUMROWS);

    sumA = sum1DArray((int *)x,NUMROWS*NUMCOLS);
    sumB = sum2DArray(x,NUMROWS);

    printf("\nThe sums are: %ld %ld\n", sumA, sumB);
    return 0;
}
