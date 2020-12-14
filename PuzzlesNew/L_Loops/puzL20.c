/*
 * Print a triange of stars, one star in the first row, three on the second...,
 * for 12 rows.
 * Write a main() program that prints a triangle of stars. Print 1 star in
 * row 0, 3 stars in row 1, 5 stars in row 2, and so on. 
 */

#include <stdio.h>

int main(int argc, char const *argv[]){
    int row, j, spaces, stars;
    int n = 12;

    for(row = 0; row < n; row++){
        stars = 2*row +1;
        spaces = n - 1 - row;

        for(j = 0; j < spaces; j++){
            printf(".");
        }
        for(j = 0; j < stars; j++){
            printf("*");
        }
        for(j = 0; j < spaces; j++){
            printf(".");
        }
        printf("\n");
    }
    return 0;
}