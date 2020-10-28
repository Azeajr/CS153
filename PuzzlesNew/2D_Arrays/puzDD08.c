/*
 * Print each element in an array of doubles.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLS 7
#define ROWS 5

int findMax(int nrows, int ncols, int x[nrows][ncols]){
    int curMax = x[0][0];

    int i, j;

    for(i = 0; i < nrows; i++){
        for(j = 0; j < ncols; j++){
            if(x[i][j] > curMax){
                curMax = x[i][j];
            }
        }
    }

    return curMax;
}

int randInt(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1) + min;
}

void print2DArray(int nrows, int ncols, int x[nrows][ncols]){
    int i, j;
    for(i = 0; i < nrows; i++){
        for(j = 0; j < ncols; j++){
            printf("%4d ", x[i][j]);
        }
        printf("\n");
    }
}

void fill2Drandom(int nrows, int ncols, int x[nrows][ncols], int low, int high){
    int i, j;
    for(i = 0; i < nrows; i++){
        for(j = 0; j < ncols; j++){
            x[i][j] = randInt(low, high);
        }
    }
}

int main(int argc, const char *argv[]){
    srand(time(NULL));

    int x[ROWS][COLS];

    fill2Drandom(ROWS, COLS, x, 10 , 25);

    print2DArray(ROWS, COLS, x);

    printf("\nMax: %4d\n", findMax(ROWS, COLS, x));

    return 0;
}
