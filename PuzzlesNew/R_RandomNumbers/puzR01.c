#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int j;
    int limit = 25;
    unsigned int seed = 123;

    if(argc == 3){
        limit = atoi(argv[1]);
        seed = atoi(argv[2]);
    }
    srand(seed);
    for(j = 0; j < limit; j++){
        printf("%5d\n", rand());
    }
    printf("\n");

    return 0;
}
