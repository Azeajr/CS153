#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randInt(int min, int max){
    return ((long)rand()*(max-min+1))/((long)RAND_MAX+1)+min;
}

int main(int argc, char *argv[]){
    const int N = 10000;
    srand( time(NULL));
    int i, randNum;

    for(i=0; i<N; i++){
        randNum=randInt(50,100);

        if(randNum >= 50 && randNum <= 100){
            printf("%7d ",randNum);
        } else{
            printf("%7d*",randNum);
        }
        if((i+1)%10==0){
            printf("\n");
        }
    }

    return 0;
}
