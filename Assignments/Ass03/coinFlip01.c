#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
    int const LENGTH = 1000;
    srand(time(NULL));
    int i;
    
    for( i = 1; i <= LENGTH; i++){
        if( rand() % 2 ){
            putchar('T');
        } else{
            putchar('H');
        }
        if(i%100==0)
        {
            putchar('\n');
        }
    }
    return 0;
}