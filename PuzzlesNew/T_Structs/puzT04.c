#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb *b){
    printf("Bulb: watts = %d\tlumens = %d\n",   b->watts, b->lumens );
}

int main(int argc, char const *argv[]){
    struct Bulb bulbA, bulbB;
    bulbA.watts = 100; bulbA.lumens = 1710;
    bulbB.watts =  60; bulbB.lumens = 1065;

    printBulb(&bulbA);
    printBulb(&bulbB);



    
    return 0;
}