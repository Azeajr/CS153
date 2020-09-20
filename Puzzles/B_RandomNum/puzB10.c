#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double randomDoubleRange(double min, double max){
    return (max-min) * (rand()/(RAND_MAX+1.0)) + min;
}

const int limit = 1000;
const double MAX = 100.0;
const double MIN = 0.0;
const double TARGET = (MAX+MIN)/2;
const double EPSILON = 1.0e-2;

int main( int agrc, char *argv[]){
    srand( time(NULL));

    int i;
    double r;

    /*
     * My version of the solution
     */

    /*for(i=0; i<limit; i++){
        r=randomDoubleRange(MIN, MAX);
        //printf("%lf\n",r);
        if(fabs(r-TARGET)<EPSILON){
            printf("Target: %lf;\tEpsilon: %lf\n",TARGET,EPSILON);
            printf("Closest value: %lf; occured on trial %d\n\n",r,i);
        }
    }*/

    while(fabs(r-TARGET)>= EPSILON && i<limit){
        r=randomDoubleRange(MIN, MAX);
        i++;
    }
    if(i!=limit){
        printf("Closest value: %18.15lf; occurred on trial: %d\n", r, i );
    }else{
        printf("No number within the limit in %d trials\n", limit );
    }

    return 0;
}
