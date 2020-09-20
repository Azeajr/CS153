#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int i,j,k=12;
    
    srand(time(0));
    
    
    for(i=0;i<=k;i++)
    {
        for(j=0;j<k-i;j++)
        {
            printf(".");
        }
        for(j=0;j<(2*i+1);j++)
        {
            if(rand()%5==0)
            {
                printf("&");
            } else if(rand()%20==0)
            {
                printf("$");
            } else
            {
                printf("*");
            }
        }
        for(j=0;j<k-i;j++)
        {
            printf(".");
        }
        printf("\n");
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<k-1;j++)
        {
            printf(".");
        }
        for(j=0;j<3;j++)
        {
            printf("*");
        }
        for(j=0;j<k-1;j++)
        {
            printf(".");
        }
        printf("\n");
    }   
}