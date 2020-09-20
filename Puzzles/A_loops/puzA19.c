#include <stdio.h>

int main(int argc, char *argv[])
{
    int n=15,j,k;
    
    for(n;n>0;n--)
    {
        for(j=15-n;j>0;j--)
        {
            printf(" ");
        }
        for(k=n;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}