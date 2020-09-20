#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb b){
    printf("Watts: %d\tLumens: %d\n",b.watts,b.lumens);
}

int main(int argc, char *argv[]){
    /*
     * From what I understand, The last part of the
     * decleration initializes all bulb structs to
     * zero,zero.  I think zero is taken as the intial
     * value for the first variable and any subquent
     * undecleared variable is set to zero by default.
     */
    struct Bulb bulbs[10]={0};
    
    bulbs[0].watts=100;
    bulbs[0].lumens=1020;
    bulbs[1].watts=20;
    bulbs[1].lumens=900;
    
    
    int i;
    
    
    /*
     * This is the expected method for zeroing out the
     * struct.
     */
    
    /*
    for(i=0;i<10;i++){
        bulbs[i].watts=0;
        bulbs[i].lumens=0;
    }
    */
    
    for(i=0;i<10;i++){
        printf("Bulb %2d: ",i);
        printBulb(bulbs[i]);
    }
    
    return 0;
}