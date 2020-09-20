#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i,n=100;
    srand(time(NULL));
    for(i=0;i<n;i++){
        printf("%d\n",rand());
    }
}
