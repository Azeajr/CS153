#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
    int i,j,n=15;
    
    for(i=0;i<(n-n/2);i++)
    {
        for(j=0;j<(n-n/2);j++)
        {
            printf("*");
        }
        for(j=0;j<(n/2);j++)
        {
            printf(".");
        }
        printf("\n");
    }
    
    for(i=0;i<(n-n/2);i++)
    {
        for(j=0;j<(n-n/2);j++)
        {
            printf("$");
        }
        for(j=0;j<(n/2);j++)
        {
            printf("o");
        }
        printf("\n");
    }
    return 0;
    */
    /*
     * Book solution uses way less
     * for loops so it probably
     * runs faster and more efficient
     */
    
    int row,col,n=15;
    
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            if(row<n/2 && col<n/2)
            {
                printf("*");
            } else if(row<n/2)
            {
                printf(".");
            } else if(col<n/2)
            {
                printf("$");
            } else
            {
                printf("o");
            }
        }
        printf("\n");
    }
    return 0;
    
}