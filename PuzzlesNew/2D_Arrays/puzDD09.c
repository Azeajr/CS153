/*
 * Fill an array with an ascending sequence of random integers
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void add2DArrays(int rows, int cols, int x[rows][cols], int y[rows][cols], int sum[rows][cols]){
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = x[i][j] + y[i][j];
        }
    }
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
    printf("\n");
}

void fill2Drandom(int nrows, int ncols, int x[nrows][ncols], int low, int high){
    int i, j;
    for(i = 0; i < nrows; i++){
        for(j = 0; j < ncols; j++){
            x[i][j] = randInt(low, high);
        }
    }
}


#define ROWS 7
#define COLS 5

int main(int argc, char const *argv[]) {
    int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];

    fill2Drandom(ROWS, COLS, A, 10, 99);
    fill2Drandom(ROWS, COLS, B, 10, 99);


    print2DArray(ROWS, COLS, A);
    print2DArray(ROWS, COLS, B);

    add2DArrays(ROWS, COLS, A, B, C);

    print2DArray(ROWS, COLS, C);






    return 0;
}
