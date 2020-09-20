#include <stdio.h>

void stringCopy(char *copy, char *source){
    while(*copy++ = *source++);
}

char * stringConcat(char *s1, char *s2){
    while(*++s1);
    while(*s1++ = *s2++);

    /*
     * Need to set up return value??????
     */
}

int main(int argc, char *argv[]){
    char buffer[100];
    char *trialsA[] = {
        "The game is",
        "Genius is an infinite capacity",
        "So is",
        "",
        "",
        "As always,\n",
        "Will\ttabs\t",
        "For great fun, "
    };

    char *trialsB[] = {
        " afoot!",
        " for taking pains.",
        " programming.",
        "",
        "concatenated to an empty string",
        "linefeeds should\nwork.",
        "confuse\tthings?",
        " change the buffer size to 5!"
    };

    int j;
    for(j = 0; j < sizeof(trialsA)/sizeof(char *); j++){
        stringCopy(buffer, trialsA[j]);
        stringConcat(buffer, trialsB[j]);
        printf("%s\n", buffer);
    }

    return 0;
}
