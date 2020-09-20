/*
 * CS153 Program Assignment #5
 * Tau Function
 * Antonio Zea Jr.
 * 10022019
 * Searches from 1 to M to find
 * the highest tau value and
 * reports back this value and
 * all of the integers that share
 * that tau value.
 */

#include <stdio.h>
#define BUFFER_SIZE 1000

int tau(int n);
 
int main(int argc, char *argv[]){
    /*
     * Could not come up with a a differnt method for storing
     * found values.  If this was java, I would have used a
     * string object combined with the append method. I would
     * have reset the string when a new max is found.
     */
    int M, i, highestTau, counter;
    highestTau = counter = 0;
    /*
     * Variable-sized object may not be initialized  error.
     * So I used the define preproccesor macro to make it
     * adjustable.  I could have instead used memset or a
     * for loop to initialize the array.
     */
    int found[BUFFER_SIZE] = {0};
    
    printf("Enter upper limit of search: ");
    scanf("%d",&M);
    
    for(i = 1; i < M; i++){
        /*
         * If a new max Tau value is found it is set as the
         * new highestTau. counter keeps track of how many
         * values have this highestTau value.
         */
        if(counter < BUFFER_SIZE-1 && tau(i) > highestTau){
            /*
             * New tau value is stored, counter is reset.
             * Input value is stored at the beginning of
             * found array.
             */
            highestTau = tau(i);
            counter = 0;
            found[counter] = i;
            counter++;
        } else if(counter < BUFFER_SIZE-1 && tau(i) == highestTau){
            /*
             * Input value stored and counter incremented.
             */
            found[counter] = i;
            counter++;
        } else if(counter >= BUFFER_SIZE-1){
            /*
             * Became worried about a buffer out of bounds.
             * Would this be called a buffer overflow or just
             * an array out of bounds error or are they the
             * same thing in this context?
             * 
             * i is set to M so that the loop will end at
             * the next check in the for statment.
             */
            i = M;
            printf("Upper limit has exceded buffer capacity.");
        }
    }
    
    printf("The largest tau value is: %d\n", tau( found[0] ) );
    printf("The integers that have this value are: ");
    for(i = 0; i < counter; i++){
        if(i == 0){
            printf("%d",found[i]);
        } else{
            printf(",%d",found[i]);
        }
    }
    printf("\n");
    
}