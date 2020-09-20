#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,j,k=11;
    for(i=0;i<=k;i++)
    {
        for(j=100*i;j<=100*i+99;j+=23)
        {
            if(j%23!=0)
            {
                j=23*(j/23);
            }
            printf("%5d ",j);
        }
        printf("\n");
    }
    return 0;
}
//Fing nailed it hard