#include <stdio.h>

typedef struct{
    int watts;
    int lumens;
} Bulb;

void printBulb(Bulb b){
    printf("watts = %d\tlumens = %d\n",b.watts,b.lumens);
}

int main(int argc, char *argv[]){
    Bulb bulbA, bulbB;
    
    bulbA.watts = 100; bulbA.lumens = 1710;
    bulbB.watts =  60; bulbB.lumens = 1065;
    
    printBulb( bulbA );
    printBulb( bulbB );
    
    return 0;
}