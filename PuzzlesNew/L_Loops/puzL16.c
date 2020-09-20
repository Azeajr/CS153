#include <stdio.h>

int main(int argc, char const *argv[]){
    int n = 8, m = 14;
    int row, col;

    for(row = 0; row < n; row++){
        for(col = 0; col < m; col++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
