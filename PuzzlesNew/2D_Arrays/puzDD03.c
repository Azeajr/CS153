#include <stdio.h>
/*
 * Write a function that prints the elements of a 2D integer array. Write one
 * row the array per line on the screen.
 */

void print2DArray(int nrows, int ncols, int x[nrows][ncols]){
    int r, c;
    for(r = 0; r < nrows; r++){
        for(c = 0; c < ncols; c++){
            /*
             * Doing this with pointers just makes it harder to read not sure if
             * there are any performace differences.
             * printf("%4d ",*(*(x+r)+c));
             *
             * The following seems more readable imho.
             */
            printf("%4d ", x[r][c]);
        }
        printf("\n");
    }
}

#define COLS 15
#define ROWS 5

int main(int argc, const char *argv[]){
    int x[ROWS][COLS];
    int count = 0;

    int r, c;

    for(r = 0; r < ROWS; r++){
        for(c = 0; c < COLS; c++){
            x[r][c] = count++;
        }
    }

    print2DArray(ROWS, COLS, x);

    printf("\n");
    return 0;
}
