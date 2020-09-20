#include <stdio.h>
#include <stdlib.h>
#include <time.h>



double randDouble(){
    return (double)rand()/((double)RAND_MAX+1);
}

int main(int argc, char *argv[]){
    int i, N=100;
    srand( time(NULL));

    for(i=0; i<N; i++){
        printf("%12.10lf ",randDouble());
        if(i%5==4){
            printf("\n");
        }
    }
    return 0;
}
