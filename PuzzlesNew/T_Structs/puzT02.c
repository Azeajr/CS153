#include <stdio.h>

struct{
    int watts;
    int lumens;
} bulbA, bulbB;

int main(int argc, char const *argv[]){
    bulbA.watts = 100;
    bulbA.lumens = 1710;

    bulbB = bulbA;

    printf("BulbB: watts = %d\tlumens = %d\n",   bulbB.watts, bulbB.lumens );

    return 0;
}
