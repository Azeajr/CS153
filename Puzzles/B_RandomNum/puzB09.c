#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



double randomDoubleRange(double min, double max){
    return (max-min)*(rand()/(RAND_MAX+1.0)) + min;
}


int main(int argc, char *argv[]){
    srand(time(NULL));

    const int N = 100;
    const double MIN = 0.0, MAX = 100.0;
    const double MID = (MAX+MIN)/2.0;

    int i;
    double rNum, closest=0;

    for(i=0; i<N; i++){
        rNum=randomDoubleRange(MIN, MAX);

        if(fabs(MID-closest)>fabs(MID-rNum)){
            closest=rNum;
        }
    }

    printf("Closest: %lf; difference: %lf\n", closest,fabs(MID-closest));

    return 0;
}
