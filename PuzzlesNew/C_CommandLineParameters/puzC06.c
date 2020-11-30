/*
 * Write a program that echoes all its command line arguments
 * (after the program name), but now does not use argc but goes through the
 * array cell by cell until it hits the null.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;

    while(*++argv){
        printf("%d: %s\n", i , *argv);
        i++;
    }
    return 0;
}
