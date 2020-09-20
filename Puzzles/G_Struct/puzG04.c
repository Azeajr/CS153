  #include <stdio.h>

struct Bulb{
    int watts;
    int lumens;
};

void printBulb(struct Bulb *b){
    printf("Watts: %d\tLumens: %d\n",b->watts,b->lumens);
}

int main(int argc, char *argv[]){
    struct Bulb bulbA={97,1201},bulbB={120,980};
    printBulb(&bulbA);
    printBulb(&bulbB);
}
