#include<stdio.h>

int main(int argc, char *argv[])
{
    int j, n, sum, sumE, sumO;
    printf("Enter n: ");
    scanf("%d",&n);
    sum=sumE=sumO=0;
    for(j=0;j<=n;j++)
    {
        /*
         * I screwed up precedence the
         * first time i wrote this program.
         * I used the not operator without
         * parenthesis which immediately
         * negated the j variable.
         * Interestingly, this changes the
         * first number, zero, into a one
         * and then the following digits
         * into a zero.
         */
        if(!(j%4==0) && !(j%3==0))
        // Better way to write
        // if ( j%3 != 0 && j%4 != 0 )
        {
            sum+=j;
            if(j%2==0)
            {
                sumE+=j;
            } else
            {
                sumO+=j;
            }
        }
        
        
    }
    printf("Sum= %d, Sum of Odd= %d, Sum of Even= %d\n",sum,sumO,sumE);
    return 0;    
}