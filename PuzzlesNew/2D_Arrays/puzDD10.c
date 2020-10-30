#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLS 6
#define ROWS 6

int randInt(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1) + min;
}
/*
 * Randomly selected numbers.  Kept track of numbers that were selected and
 * eliminated them from the pool of random numbers to be choosen
 */
void scramble( int rows, int cols, int orig[rows][cols], int scram[rows][cols]){
    /*
     * Setting up 1D array that will keep track of which numbers have already
     * been selected.
     */
    int size = rows * cols;
    int counter[size];
    /*
     * The default value in this array is false because it will be interpreted
     * as not yet selected by randInt.
     */
    int i;
    for(i = 0; i < size; i++){
        counter[i] = 0;
    }

    int index;
    for(i = 0; i < size; i++){
        /*
         * After a number(index) is selected from randInt it is removed from the
         * counter[index] by setting the value to 1.
         */
        index = randInt(0, size - i);
        /*
         * If a particular index has already been used, then index is
         * incremented until the next available index is located.  This
         * preserves the probability mapping of available numbers.
         */
        while(counter[index]) index++;
        counter[index] = 1;
        /*
         * This setup is necessary so that the arrays are treated as the
         * contiguous data that they are.  By that I mean that casting the 2D
         * array pointers as integer pointers lets me process them as designed.
         */
        *((int *)scram + index) = *((int *)orig + i);
    }
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

void fill2Darray(int nrows, int ncols, int x[nrows][ncols]){
    int i, j, val = 0;
    for(i = 0; i < nrows; i++){
        for(j = 0; j < ncols; j++){
            x[i][j] = val++;
        }
    }
}

int main(int argc, char const *argv[]) {
    int orig[ROWS][COLS];
    int scram[ROWS][COLS];

    srand(time(NULL));

    fill2Darray(ROWS, COLS, orig);

    scramble(ROWS, COLS, orig, scram);


    printf("Original:\n");
    print2DArray(ROWS, COLS, orig);
    printf("\n\nScrambled:\n");
    print2DArray(ROWS, COLS, scram);

    return 0;
}
