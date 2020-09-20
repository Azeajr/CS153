/*
 * CS153 Program Assignment #5
 * Phi Function
 * Antonio Zea Jr.
 * 10022019
 * 
 * Written this program before.
 * First thought was to write a
 * program using a for loop that
 * checks every number starting
 * at the lowest between a and b
 * and decrementing until I find
 * a factor.
 * It turns out this solution is
 * not as efficient as the
 * Euclidean Algorithm and
 * recursion.
 */

int gcd(int a, int b){
    /*
     * Any value other than zero
     * will evaluate to true. If
     * b happens to equal zero
     * then we have found the
     * greatest common factor.
     */
    if(b){
        return gcd(b, a%b);
    } else{
        return a;
    }
}