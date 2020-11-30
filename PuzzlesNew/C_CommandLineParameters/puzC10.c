/*
 * Write a program that computes X / M and X % M for integers X and M.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc != 3){
        printf("prog X M\n");
        return 0;
    }

    int X = atoi(argv[1]);
    int M = atoi(argv[2]);

    printf("%d/%d = %d\n", X, M, X/M);
    printf("%d%%%d = %d\n", X, M, X%M);
    return 0;
}
