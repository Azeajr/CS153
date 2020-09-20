#include <stdio.h>
#include <stdlib.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb* b){
    if(b!=NULL){
        printf("Watts: %d\tLumens: %d",b->watts,b->lumens);
    }
}

#define length 10

int main(int argc, char *argv[]){
    int i;
    struct Bulb *bptr[length];
    for(i=0;i<length;i++){
        bptr[i]=NULL;
    }
    
    if((bptr[2]=(struct Bulb*)malloc(sizeof(struct Bulb)))==NULL){
        printf("No more memory.");
    }else{
        bptr[2]->watts=100;     bptr[2]->lumens=1710;
    }

    if((bptr[5]=(struct Bulb*)malloc(sizeof(struct Bulb)))==NULL){
        printf("No more memory.");
    }else{
        bptr[5]->watts=60;      bptr[5]->lumens=900;
    }

    if((bptr[8]=(struct Bulb*)malloc(sizeof(struct Bulb)))==NULL){
        printf("No more memory.");
    }else{
        bptr[8]->watts=50;     bptr[8]->lumens=1000;
    }
    
    if((bptr[9]=(struct Bulb*)malloc(sizeof(struct Bulb)))==NULL){
        printf("No more memory.");
    }else{
        bptr[9]->watts=10;      bptr[9]->lumens=2100;
    }
        
    for(i=0;i<length;i++){
        printf("Bulb %2d: ",i);
        printBulb(bptr[i]);
        printf("\n");
        
    }
    
    for(i=0;i<length;i++){
        /*
         * Not sure why this particular if is necessary.
         * Passing NULL to free should have no effect.
         */
        if(bptr!=NULL){
            free(bptr[i]);
        }
    }
    
}