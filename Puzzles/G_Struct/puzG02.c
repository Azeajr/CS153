#include <stdio.h>

struct{
    int watts;
    int lumens;
}bulbA, bulbB;

int main(int argc, char *argv[]){
    bulbA.watts=100;
    bulbA.lumens=1710;
    bulbB=bulbA;
    printf("A watts: %d A lumens: %d\n",bulbA.watts,bulbA.lumens);
    printf("B watts: %d B lumens: %d\n",bulbB.watts,bulbB.lumens);
}