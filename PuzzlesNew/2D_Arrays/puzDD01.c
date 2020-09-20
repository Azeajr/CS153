#include <stdio.h>

void fill2DArray(int row, int col, int arr[row][col]){
    int r, c, i;
    for(r = 0, i = 0; r < row; r++){
        for(c = 0; c < col; c++){
            arr[r][c] = i++;
        }
    }
}

void print2DArray(int row, int col, int arr[row][col]){
    int r, c;
    for(r = 0; r < row; r++){
        for(c = 0; c < col; c++){
            printf("%3d ", arr[r][c]);

        }
        printf("\n");
    }
}



int main(int argc, char *argv[]){
    const int Nrows = 3, Mcols = 5;
    int x[Nrows][Mcols];

    fill2DArray(Nrows, Mcols, x);
    print2DArray(Nrows, Mcols, x);

    printf("\n");

    return 0;
}
