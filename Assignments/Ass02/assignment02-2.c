/*
 * CS153 Program Assignment #2
 * Character Counter
 * Antonio Zea Jr.
 * 09152019
 */

#include <stdio.h>


int main(int argc, char *argv[])
{
    int i,c,upper[26]={0},lower[26]={0};
    /*
     * Did not have to use decimal here.
     * I could have instead used characters.
     * 65 is 'A' and so on.
     */
    
    while((c=getchar())!=EOF)
    {
        if(c>=65 && c<=90)
        {
            upper[c-65]++;
        }
        
        if(c>=97 && c<=122)
        {
            lower[c-97]++;
        }
    }
    
    for(i=0;i<=25;i++)
    {
        printf("%c occured %d times\n",i+97,lower[i]);
        
        /*
         * I would have included both lower and upper 
         * case processing in the same for loop to 
         * make the program more effecient but I 
         * wanted it to look as specifed in the 
         * assignment.  Is it more important to adhere
         * to the specification or should I submit any
         * improvment I may find?
         */
        
        /*
        printf("%c occured %d times\n",i+65,upper[i]);
        */
    }
    for(i=0;i<=25;i++)
    {

        printf("%c occured %d times\n",i+65,upper[i]);
    }
    
    
}