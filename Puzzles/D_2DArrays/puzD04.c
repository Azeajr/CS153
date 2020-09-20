#include <stdio.h>
#include <stdlib.h>



#define NUMCOLS 5
#define NUMROWS 3

void print2DArray( int x[][NUMCOLS], int nrows){
    int r,c;
    for( r=0; r<nrows; r++){
        for( c=0; c<NUMCOLS; c++){
            printf("%d\t",x[r][c]);
        }
        printf("\n");
    }
}

void fill2DArray( int x[][NUMCOLS], int nrows){
    int r,c,count=0;
    for( r=0; r<nrows; r++){
        for( c=0; c<NUMCOLS; c++){
            x[r][c]=count++;
        }
    }
}


int main( int argc, char *argv[]){
    int x[NUMROWS][NUMCOLS];

    fill2DArray( x, NUMROWS);

    print2DArray( x, NUMROWS);

    printf("\n");

    return 0;
}
