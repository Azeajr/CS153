#include <stdio.h>

int main(int argc, char *argv[])
{
    int j,k,n=15;
    
    for(j=1;j<n;j++)
    {
        for(k=1;k<j;k++)
        {
            printf(".");
        }
        printf("*\n");
    }
    return 0;
}