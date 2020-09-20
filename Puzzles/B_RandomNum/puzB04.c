#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int i, N=100000000,values[10]={0};
    
    printf("N==%d\n",N);
    
    for(i=0;i<N;i++){
        values[rand()%10]++;
    }
    
    for(i=0;i<10;i++){
        printf("%d: %d\n",i,values[i]);
    }
}