#include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb b){
    printf("Bulb: watts = %d\tlumens = %d\n",   b.watts, b.lumens );
}

#define SIZE 10

int main(int argc, char const *argv[])
{
    struct Bulb a[SIZE] = {0}; // I believe that this will zero out each bulb.

    int i;
    for(i = 0; i < SIZE; i++){
        a[i].lumens = 0;
        a[i].watts = 0;
    }

    a[3].lumens = a[3].watts = 120;
    a[4].lumens = a[7].lumens = 1900;


    for(i = 0; i < SIZE; i++){
        printBulb(a[i]);
    }

    return 0;
}