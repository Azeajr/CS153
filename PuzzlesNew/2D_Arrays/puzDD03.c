#include <stdio.h>
void print2DArray(int nrows, int ncols, int x[][ncols]){
    int i;
    for(i = 0; i < nrows*ncols; i++){
        if(i%ncols == ncols-1){
            printf("%d\n",**(x+i));
        }
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
