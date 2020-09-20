#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main(int argc, char *argv[]){
    srand(time(NULL));

    int N = 500, values[10] = {0}, i,j;

    for(i=0; i<500; i++){
        values[rand()%10]++;
    }

    for(i=0; i<10; i++){
        printf("%d (%5d):",i,values[i]);
        for(j=0; j<values[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}*/
const int N=500;
#define maxPlus 10

int values[maxPlus]={0};

void generate(){
    int i;
    for(i=0; i<N; i++){
        values[rand()%10]++;
    }
}

int findmax(){
    int i;
    /*
     * Improvement
     * int max = values[0]
     * combined with
     * for(i=1; i<10; i++)
     *
     */
    int max=0;

    for(i=0; i<10; i++){
        if(values[i] > max ){
            max=values[i];
        }
    }
    return max;
}

void plot(int max){
        const int starMax = 10;
        int i,j;

        for(i=0; i<maxPlus; i++){
            printf("%d (%5d):",i,values[i]);
            for(j=0; j<values[i]*starMax/max; j++){
                printf("*");
            }
            printf("\n");
        }
}

int main(int argc, char *argv[]){
    srand( time(NULL));
    generate();
    plot(findmax());
    return 0;
}
