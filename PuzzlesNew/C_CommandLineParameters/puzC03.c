/*
 * Create a program that echoes to the screen the first parameter after the
 * program name. The program should tests if there is at least one parameter
 * after the program name.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Argument Count: %d\n", argc);
    if(argc > 1){
        printf("First Param: %s\n", argv[1]);
    }else{
        printf("Need more arguments.\n");
    }
    
    return 0;
}
