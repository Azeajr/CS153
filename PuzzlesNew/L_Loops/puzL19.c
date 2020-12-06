/*
 * Write a main() program that prints a wedge of stars. Print n stars in row 0,
 * (n-1) stars in row 1, (n-2) stars in row 2, and so on. But now, pad the left
 * side of each line with spaces so that each line consists of n characters.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, spc, star;
    int n = 15;

    for(row = 0; row < n; row++){
        for(spc = 0; spc < row; spc++){
            printf(" ");
        }

        for(star = 0; star < n-row; star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}