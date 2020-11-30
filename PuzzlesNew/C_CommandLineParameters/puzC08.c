/*
 * Write a program that calculates the area of a circle who's radius is entered
 * as a command line parameter.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    if(argc == 2){
        printf("%lf\n", pow(atof(argv[1]), 2) * M_PI);
    }
    return 0;
}