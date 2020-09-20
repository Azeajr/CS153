#include <stdio.h>

int main(int argc, char *argv[])
{
    int j,n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(j=1;j<=n;j+=2)
    {
        printf("%3d ",j);
        if(j%5==4)
        {
            printf("\n");
        }
    }
    //printf("J: %d",j);
    if(j%5!=1)
        printf("\n");
    return 0;
}