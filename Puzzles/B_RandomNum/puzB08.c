#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randDouble(double min, double max){
    /*
     * The perscribed answer below.  I used the
     * solution for random integer as a template.
     * return (max-min)*(rand()/(RAND_MAX+1.0)) + min;
     *
     */
    return (rand() * (max-min))/(RAND_MAX+1.0) + min;
}

int main( int argc, char *argv[]){
    int i, N=100;

    for(i=0; i<N; i++){
        printf("%12.10lf ", randDouble(5.0,10.0));
        if(i%5==4){
            printf("\n");
        }
    }
    return 0;
}
