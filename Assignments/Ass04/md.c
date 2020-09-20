/*
 * CS153 Program Assignment #4
 * Message Digest
 * Antonio Zea Jr.
 * 09262019
 * Uses standard input and file redirection
 * to compute a message digest of input file.
 * Prints digest in hex.  
 * 
 * This program is meant to be used in a unix
 * environment. Otherwise, in the case of
 * Windows, the file might be read in using
 * 'text' mode which woudle interpret a
 * End Of Line character as two characters
 * (carriage return and a line feed).
 */

#include <stdio.h>

int main(int argc, char *argv[]){
    
    /*
     * int s1=0, s2=0, s3=0, s4=0;
     */
    int s1, s2, s3, s4;
    s1=s2=s3=s4=0;
    /*
     * const int m1=3,...
     */
    int m1, m2, m3, m4;
    m1=3;
    m2=7;
    m3=13;
    m4=23;
    
    int B;
    
    while((B=getchar()) != EOF){
        s1 = (s1            + B*m1) % 256;
        s2 = (s1+s2         + B*m2) % 256;
        s3 = (s1+s2+s3      + B*m3) % 256;
        s4 = (s1+s2+s3+s4   + B*m4) % 256;
    }
    
    printf("%02x%02x%02x%02x\n", s1, s2, s3, s4);
    
}