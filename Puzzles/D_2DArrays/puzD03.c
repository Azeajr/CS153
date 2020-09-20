#include <stdio.h>
/*
 * print2DArray(int **x, int nrows, int ncols)
 * seems like what this puzzle was going for.
 * This would require a cast using (int **)
 * on the function call
 */
void print2DArray( int *x, int nrows, int ncols){
    int r,c;

    for(r=0; r<nrows; r++){
        for(c=0; c<ncols; c++){
            printf("%d\t",*(x+ncols*r+c));
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    int x[][7] = { { 0,  1,  2,  3,  4,  5,  6},
                    { 7,  8,  9, 10, 11, 12, 13},
                    {14, 15, 16, 17, 18, 19, 20} };


    /*
     * There are a bunch of ways to pass the proper pointer.
     * *x gets what is inside of x.  x is a pointer to
     * the first row of the 2d array. But this is a case of
     * a pointer to a pointer.
     * &x[0][0]
     * x[0]
     */
    print2DArray(x[0],3,7);

    printf("\n");
    return 0;
}
