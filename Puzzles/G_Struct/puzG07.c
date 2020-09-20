#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb* b){
    /*
     * printf("Watts: %d\nLumens: %d\n",(*b).watts,(*b).lumens);
     */
    printf("Watts: %d\nLumens: %d\n",b->watts,b->lumens);
}

void dimBulb(struct Bulb* b){
    /*
     * (*b).lumens *= 0.75;
     */
    b-> lumens *= 0.75;
}

int main(int argc, char *argv[]){
    struct Bulb bulbA = {60,1400};
    
    printBulb(&bulbA);
    
    dimBulb(&bulbA);
    
    printBulb(&bulbA);
    
    return 0;
}