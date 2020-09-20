#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double randDouble(){
    return (double)rand()/((double)RAND_MAX+1);
}

const int trials = 100;

int main(int argc, char *argv[]){
    srand(time(NULL));
    double value;
    int i;
    for(i = 0; i < trials; i++){
        value = randDouble();
        printf("%lf ", value);
        if(value  >= 1 || value < 0){
            printf("***");
            return 0;
        }
        if(i % 5 == 4){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
