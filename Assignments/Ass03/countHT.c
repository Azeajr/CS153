/*
 * CS153 Program Assignment #3
 * Count Heads and Tails
 * Antonio Zea Jr.
 * 09222019
 */

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int c, countT, countH;
    countT = 0;
    countH = 0;
    
    while((c=getchar()) != EOF){
        if(c == 'T'){
            countT++;
        } else if(c == 'H'){
            countH++;
        }
    }
    
    printf("H occured %d times\n",countH);
    printf("T occured %d times\n",countT);
    
    return 0;
}