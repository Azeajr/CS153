#include <stdio.h>

#define Nrows 3
#define Mcols 4

void print2DArray(int row, int col, int arr[row][col]){
    int r, c;
    for(r = 0; r < row; r++){
        for(c = 0; c < col; c++){
            printf("%3d ", arr[r][c]);
        }
        printf("\n");
    }
}

int main(){
    int x[Nrows][Mcols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, -2, 9, 23}
    };

    print2DArray(Nrows, Mcols, x);

    printf("\n");

    return 0;
}
