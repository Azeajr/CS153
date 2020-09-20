#include <stdio.h>

struct{
    int watts;
    int lumens;
} bulbA;

int main(int argc, char *argv[]){
    bulbA.watts=100;
    bulbA.lumens=1710;
    
    printf("A watts: %d A lumens: %d\n",bulbA.watts,bulbA.lumens);
    
    return 0;
}