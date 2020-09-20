/*
 * CS153 Program Assignment #5
 * Phi Function
 * Antonio Zea Jr.
 * 10022019
 * Phi functions looks for how
 * many numbers under n are
 * relatively prime to it.
 */

/*
 * Wrote a version of this using
 * Euler's product formula to
 * compare the speed of the two
 * algorithms.  Euler's method
 * computed the phi value of
 * INT_MAX in a couple of seconds.
 * While this method took more than
 * 2 minutes before I quit the
 * process.
 */
int gcd(int a, int b);

int phi(int n){
    int i,counter;
    counter = 0;
    /*
     * Check each number from 1 to
     * n-1 to see if it is
     * relatively prime to n.
     */
    for(i = 1; i < n; i++){
        if(gcd(i, n) == 1){
            counter++;
        }
    }
    return counter;
    
    
}