#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i,j,n=100;
    int count=0;
    srand(time(NULL));
    
    for(i=0;i<n;i++){
        printf("Cycle: %d\n",i+1);
        for(j=0;j<RAND_MAX;j++){
            if(rand()==RAND_MAX){
                count++;
            }
        }
    }
    printf("RAND_MAX occured %d times in %d*RAND_MAX trials\n",count,n);
}