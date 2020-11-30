/*
 * Write a program that determines if its first parameter is odd or even.
 * Skip error checking.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    if(argc != 2){
        return 0;
    }
    
    if (atoi(argv[1])%2){
        printf("%s is Odd\n",argv[1]);
    }else{
        printf("%s is Even\n",argv[1]);
    }
    return 0;
}