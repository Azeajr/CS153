#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDie(){
    static int initialized = 0;
    int num;

    if ( !initialized ){
        srand( time(NULL) );
        initialized = 1;
    }
    num = rand()%6 + 1 ;
    return num;
}




int main(int argc, char *argv[]){
    int i,total=0;
    for(i=0;i<1000000;i++){
        total+=throwDie();
    }
    
    printf("%lf",total/1000000.0);
}