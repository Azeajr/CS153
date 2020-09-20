#include <stdio.h>

int negate(int input);
int increment(int input);

int main(int argc, char *argv[]){
    printf("Increment of 10,0,-10: %d, %d, %d\n",increment(10),increment(0),increment(-10));
    printf("Negate of 10,0,-10: %d, %d, %d\n",negate(10),negate(0),negate(-10));
}