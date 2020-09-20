#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int i,n;
    
    for(i=0; i<n;i++){
        printf("%d\n",rand()%10);
    }
    
}