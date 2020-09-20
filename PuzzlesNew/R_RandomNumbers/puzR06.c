#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRIALS 100000000
#define LOW 50
#define HIGH 100

int randInt(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1) + min;
}
int main(int argc, char *argv[]){
    int i, x;
    for(i = 0; i < TRIALS; i++){
        x = randInt(LOW,HIGH);

        if(x < LOW || x > HIGH){
            printf("%4d*", x);
        } else {
            printf("%4d", x);
        }
        if(i % 10 == 9) printf("\n");
    }
    return 0;
    
}
