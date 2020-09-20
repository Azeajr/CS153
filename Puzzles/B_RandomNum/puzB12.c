#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

char randChar(){
    return (rand()*(26))/(RAND_MAX+1)+'a';
}

char[] randString(){
    char string[MAX+1];
    int i;

    length = (rand()*MAX)/(RAND_MAX+1);

    for(i = 0; i < length; i++){
        string[i]=randChar();
    }
    string[i+1]=NULL;

    return string;
}

int main(int argc, char *argv[]){
    int

    return 0;
}
/*
 * NOT FINISHED***********************************************************
 ************************************************************
 ************************************************************
 ************************************************************
 */
