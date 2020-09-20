#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb b[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("Watts: %d\tLumens: %d\n",b[i].watts,b[i].lumens);
    }

}

void dimBulb(struct Bulb* b){
    b->lumens*=0.75;
}

int main(int argc, char *argv[]){
    #define length 5
    int i;
    struct Bulb lights[length] = { {100,1710},
                                   {60,1065},
                                   {100,1530},
                                   {40,505},
                                   {75,830} };
    
    printBulb(lights, length);
    printf("\n");
    
    for(i=0; i<length; i++){
        /*
         * dimBulb(lights+i);
         */
        dimBulb(&lights[i]);

    }
    printBulb(lights, length);
}