/*
 * Write a main() program that prints a wedge of stars. Print n stars in row 0,
 * (n-1) stars in row 1, (n-2) stars in row 2, and so on.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, col;
    int n = 15;


    for (row = n; row > 0; row--){
        for (col = row; col > 0; col--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
