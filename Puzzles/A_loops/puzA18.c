#include <stdio.h>

int main(int argc, char *argv[])
{
    int j,k;
    
    for(j=15;j>0;j--)
    {
        for(k=j;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}