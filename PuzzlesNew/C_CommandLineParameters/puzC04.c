/*
 * Modify this program that echoes its first and second command line parameters
 * after the program name if both exist, but echoes only the first if only it
 * exists.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Argument Count: %d\n", argc);
    if(argc > 2){
        printf("First Param: %s\n", argv[1]);
        printf("Second Param: %s\n", argv[2]);
    }else if(argc > 1){
        printf("First Param: %s\n", argv[1]);
    }else{
        printf("No params after the program name\n");
    }
    return 0;
}
