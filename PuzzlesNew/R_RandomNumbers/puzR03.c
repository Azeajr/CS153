#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int i;
    srand(time(NULL));

    for(i = 0; i < 10; i++){
        printf("%3d\n",rand()%10);
    }

    return 0;
}
