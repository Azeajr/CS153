/*
 * CS153 Program Assignment #3
 * Coin Flip
 * Antonio Zea Jr.
 * 09222019
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main( int argc, char *argv[]){
    /*
     * Best practice for constants,
     * instead of using define.
     * define has the capacity of
     * causing trouble, web search
     * Macros in conjunction with
     * preprocessor for more info.
     */
    int const LENGTH = 1000;
    srand(time(NULL));
    int i;
    
    for( i = 1; i <= LENGTH; i++){
        if(rand() >= RAND_MAX/2){
            putchar('T');
        } else{
            putchar('H');
        }
        /*
         * Really wanted to include
         * the bottom so that the output
         * looked like the included
         * mystery file but spec
         * required no newlines.
         */
        /*
        if(i%100==0){
            putchar('\n');
        }
        */
    }
    return 0;
}