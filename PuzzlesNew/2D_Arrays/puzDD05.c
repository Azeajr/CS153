#include <stdio.h>
/*
 * Write a function that fills an array with integers in ascending order.
 * Unlike puzzle D01, do the work in a function, not in main().
 */
void print2DArray(int nrows, int ncols, int x[nrows][ncols]){
    int r, c;
    for(r = 0; r < nrows; r++){
        for(c = 0; c < ncols; c++){
            printf("%4d ", x[r][c]);
        }
        printf("\n");
    }
}

void fill2DArray(int nrows, int ncols, int x[nrows][ncols]){
    int r, c;
    for(r = 0; r < nrows; r++){
        for(c = 0; c < ncols; c++){
            x[r][c] = (r+1)*(c+1);
        }
    }
}

#define COLS 7
#define ROWS 5

int main(int argc, char const *argv[]){
    int x[ROWS][COLS];

    fill2DArray(ROWS, COLS, x);

    print2DArray(ROWS, COLS, x);

    printf("\n");

    return 0;
}
