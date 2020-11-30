/*
 * Write a program that computes the sum of all the floating point numbers on
 * the command line.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc == 1){
        printf("Nothing entered?\n");
        return 0;
    }
    double sum = 0.0;

    printf("values: ");
    int i;
    for(i=1; i < argc; i++){
        double val = atof(argv[i]);
        printf("%lf ", val);
        sum += val;
    }

    printf("\nsum: %lf\n", sum);

    return 0;
}