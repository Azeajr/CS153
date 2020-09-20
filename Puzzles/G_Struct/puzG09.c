#include <stdio.h>
#include <stdlib.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb* b){
    printf("Watts: %d\tLumens: %d\n",b->watts,b->lumens);
}

int main(int argc, char *argv[]){
    struct Bulb *bptr;
    
    *bptr=(struct Bulb*)malloc(sizeof(struct Bulb));
    if(bptr==NULL){
        printf("Out of memory!\n");
        exit(1);
    }
    
    bptr->watts=100;
    bptr->lumens=1530;
    
    printBulb(bptr);
    
    free(bptr);
}