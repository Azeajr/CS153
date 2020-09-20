/*
 * CS153 Program Assignment #5
 * Tau Function
 * Antonio Zea Jr.
 * 10022019
 * Determines how many factors
 * n has.
 */

#include <math.h>
int tau(int n){
    int i, factorCount;
    factorCount = 0;
    
    /*
     * This was my first attempt. Then this reminded me
     * of a program I wrote to determine if a number is
     * prime.  I only had to check for factors from 1
     * to the sqrt(n).  Same idea applies here.
     * Factors happen in pairs unless the factor
     * happens to be sqrt(n).
     */
    /*
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            factorCount++;
        }
    }
    */
    
    for(i = 1; i <= sqrt(n); i++){
        if(n%i == 0 && i == n/i){
            factorCount++;
        } else if(n%i == 0){
            factorCount+=2;
        }
    }
    
    return factorCount;
}