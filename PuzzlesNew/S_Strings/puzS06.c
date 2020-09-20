#include <stdio.h>

void stringCopy(char *copy, char *source){
    do{
        *copy++ = *source;
    }while(*source++);
    /*
     * Shorter version
     * this is important
     * while(*copy++ = *source++) ;
     */
}


int main(){
    char buffer[100];
    char *trials[] ={
        "The game is afoot!",
        "Genius is an infinite capacity for taking pains.",
        "So is programming.",
        "",
        "As always,\nlinefeeds should\nwork.",
        "Will\ttabs\t\tconfuse\tthings?",
        "For great fun, change the buffer size to 5!"
    };

    int j;

    for(j = 0; j < sizeof(trials)/sizeof(char *); j++){
        stringCopy(buffer, trials[j]);
        printf("%s\n", buffer);
    }

    return 0;
}
