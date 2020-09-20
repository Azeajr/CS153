/*
 * Use the seive of Eratosthenes to
 * find all primes between 1 and
 * climax.
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    int climax=100;
    int i,j;
    int primes[climax];
    int target=sqrt(climax);
    /*
     * Initialize array values to 1.
     * This represents that the
     * assumption is that all the
     * number in the arrray are
     * prime.
     */
    for(i=0;i<climax;i++){
        primes[i]=1;
    }
    
    for(i=2;i<=target;i++){
        if(primes[i-1]){
            for(j=i*i;j<=climax;j+=i){
                primes[j-1]=0;
            }
        }
    }
    
    for(i=0;i<100;i++){
        if(primes[i]){
            printf("%d ",i+1);
        }        
    }
    printf("\n");
    
}