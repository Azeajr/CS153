#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i,j,n=atoi(argv[1]),m=atoi(argv[2]),N=atoi(argv[3]),M=atoi(argv[4]);
    
    //printf("M-m%d",M-m);
    
    for(i=0;i<(N-n)/2;i++)
    {
        for(j=0;j<M;j++)
        {
            printf(".");
        }
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<(M-m)/2;j++)
        {
            printf(".");
        }
        for(j=0;j<m;j++)
        {
            printf("*");
        }
        for(j=0;j<(M-m)/2;j++)
        {
            printf(".");
        }
        printf("\n");
    }
    
    for(i=0;i<(N-n)/2;i++)
    {
        for(j=0;j<M;j++)
        {
            printf(".");
        }
        printf("\n");
    }
    return 0;
}