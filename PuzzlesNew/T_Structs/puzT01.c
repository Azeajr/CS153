#include <stdio.h>

struct{
    int watts;
    int lumens;
} bulbA;

int main(int argc, char const *argv[])
{
    bulbA.watts = 100;
    bulbA.lumens = 1710;

    printf("BulbA: watts = %d\tlumens = %d\n",   bulbA.watts, bulbA.lumens );
    
    return 0;
}
