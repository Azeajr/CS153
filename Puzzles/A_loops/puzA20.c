#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,j,k=12;
    
    for(i=0;i<k;i++)
    {
        for(j=1;j<=k-i;j++)
        {
            printf(".");
        }
        for(j=1;j<=(2*i+1);j++)
        {
            printf("*");
        }
        for(j=1;j<=k-i;j++)
        {
            printf(".");
        }
        printf("\n");
    }
    return 0;
    
    
    
    
    
    
    /*
    for(j=1;j<l;j++)
    {
        for(k=1;k<(l/2);k++)
        {
            printf(".");
        }
        
        for(i=1;i<j;i++)
        {
            printf("*");
        }
        
        for(k=1;k<(l/2);k++)
        {
            printf(".");
        }
        printf("\n");
        l--;
    }
    */
    return 0;
}