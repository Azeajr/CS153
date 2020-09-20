#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randChar(){
    return (rand()*(26))/(RAND_MAX+1)+'a';
}

const int LIMIT = 1000;
const int groupSize = 6;
const int lineSize = 60;



int main( int argc, char *argv[]){
    int i;

    srand( time(NULL));
    /*
     * Misunderstood the specification for the output.
     */
    /*for(i=0; i<LIMIT; i++){
        printf("%c",randChar());
        if(i%5==4){
            printf(" ");
        }
        if(i%50==49){
            printf("\n");
        }
    }*/
    char line[lineSize + 1];
    int pos = 0;

    for (i = 0; i < LIMIT; i++){
        line[pos] = randChar();
        pos++;

        if (pos == lineSize-1){
            line[lineSize-1] = (char)0;
            printf("%s\n", line);
            pos = 0;
        }else if (pos%groupSize == groupSize - 1){
            line[pos] = ' ';
            pos++;
        }
    }
    if (pos != 0){
        line[pos] = (char)0;
        printf("%s\n", line);
    }

}
