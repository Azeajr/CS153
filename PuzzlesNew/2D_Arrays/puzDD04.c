#include <stdio.h>

void print2Darray(int nrows, int ncols, int *x){
    int r, c;

    for(r = 0; r < nrows; r++){
        for(c = 0; c < ncols; c++){
            printf("%4d ",*(x+r*ncols+c));
        }
        printf("\n");
    }
}

#define ROWS 3
#define COLS 7

int main(int argc, const char *argv[]){
    int x[ROWS][COLS] = { { 0,  1,  2,  3,  4,  5,  6},
                          { 7,  8,  9, 10, 11, 12, 13},
                          {14, 15, 16, 17, 18, 19, 20} };

    /*
     * Another way to pass the array would be to cast x as (int *)
     */
    print2Darray(ROWS, COLS, x[0]);

    printf("\n");
    return 0;
}
