/*
 * CS153 Program Assignment #3
 * Count Pairs
 * Antonio Zea Jr.
 * 09222019
 */

#include <stdio.h>

int main( int argc, char *argv[]){
    /*
     * firstChar is used as temporary holder
     * of c's value so that c can hold the
     * 2nd character. I wonder if this can
     * done with out a temporary holder.
     */
    int c,firstChar,pairCount;
    int countTT,countTH,countHT,countHH;
    countTT=countTH=countHT=countHH=0;
    pairCount=1;
    /* 
     * paircount needs to be started at 1
     * so that the first part of the if
     * statement gets skipped since it
     * will correspond with the first
     * character of a pair
     */
    while((c=getchar()) != EOF){
        if(pairCount%2==1){
            firstChar=c;
            pairCount++;
        } else{
            if(firstChar=='T'){
                if(c=='T'){
                    countTT++;
                } else{
                    countTH++;
                }
            } else{
                if(c=='T'){
                    countHT++;
                } else{
                    countHH++;
                }
            }
            pairCount++;
        }
        
    }
    printf("HH occured %d times\n",countHH);
    printf("HT occured %d times\n",countHT);
    printf("TH occured %d times\n",countTH);
    printf("TT occured %d times\n",countTT);
    return 0;
}