#include <stdio.h>

int main(int argc, char *argv[])
{
    int j, N;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    for(j=0;j<N;j++)
    {
        printf("%3d\n",2*j+1);
    }
    return 0;
}
//Nailed it