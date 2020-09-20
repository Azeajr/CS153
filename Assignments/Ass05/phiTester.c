/*
 * CS153 Program Assignment #5
 * Phi Function
 * Antonio Zea Jr.
 * 10022019
 * Driver program to test out
 * phi function which in turn
 * tests gcd function.
 */
#include <stdio.h>

int phi(int n);

int main(int argc, char *argv[]){
    int n;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Phi is %d\n",phi(n));
    return 0;
}