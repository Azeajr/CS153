#include <stdio.h>

#define NUMCOLS 15
#define NUMROWS 5

void print2DArray(int x[][NUMCOLS], int nrows){
    int r, c;
    for(r=0; r<nrows; r++){
        for(c=0; c<NUMCOLS; c++){
            printf("%d\t", x[r][c]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    int x[NUMROWS][NUMCOLS];
    int count = 0;

    int r, c;

    for(r=0; r<NUMROWS; r++){
        for(c=0; c<NUMCOLS; c++){
            x[r][c]=count++;
        }
    }

    print2DArray(x,NUMROWS);

    printf("\n");
    return 0;
}
