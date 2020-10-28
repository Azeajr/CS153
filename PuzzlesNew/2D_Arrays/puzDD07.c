/*
 * Fill an array with random doubles in the range Low <= d < High
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLS 7
#define ROWS 5

long add2DArray(int nrows, int ncols, int x[nrows][ncols]){
    long sum = 0;

    int i, j;
    for(i = 0; i < nrows; i++){
        for(j = 0; j < ncols; j++){
            sum += x[i][j];
        }
    }

    return sum;
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

    printf("\nSUM: %4ld\n", add2DArray(ROWS, COLS, x));

    return 0;
}
