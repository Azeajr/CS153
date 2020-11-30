/*
 * Write a program that echoes all the command line parameters after the
 * program name, no matter how many there are. Use argc.
 */


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i=1; i < argc; i++){
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
