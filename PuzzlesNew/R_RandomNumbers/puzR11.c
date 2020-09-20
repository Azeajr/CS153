#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randChar(){
    return rand()%26 + 'a';
}

const int N = 500;

int main(int argc, char *argv[]){
    srand(time(NULL));

    int i;
    for(i = 0; i < N; i++){
        //printf("i:%dimod50:%d\t\t", i, i % 50);
        if(i % 50 == 49){
            printf("%c\n", randChar());
        } else if(i % 5 == 4){
            printf("%c ",randChar());
        } else {
            printf("%c", randChar());
        }
    }

    return 0;
}
