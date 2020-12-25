#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb *b){
    printf("Bulb: watts = %d\tlumens = %d\n",   b->watts, b->lumens );
}

void dimBulb(struct Bulb *b){
    b->lumens *= 0.90;
}

int main(int argc, char const *argv[]){
    struct Bulb bulbA = {60, 1710};

    printBulb(&bulbA);
    dimBulb(&bulbA);
    printBulb(&bulbA);

    
    return 0;
}
