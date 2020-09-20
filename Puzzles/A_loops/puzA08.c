#include <stdio.h>

int main(int argc, char *argv[])
{
    int j, N,sum,sumE,sumO;
    printf("Enter n: ");
    scanf("%d", &N);
    sum=sumE=sumO=0;
    for(j=0;j <= N;j++)
    {
        sum+=j;
        if(j%2==0)
        {
            sumE+=j;
        } else{
            sumO+=j;
        }
    }
    printf("Sum = %d, Sum of Odd = %d, Sum of Even = %d\n",sum,sumO,sumE);
    
    /*
     Awesome alternative....
     for(j=0;j<=N;j++)
     {
         sum+=j;
         if(j%2==0) sumE+=j;
     }
     printf("Sum = %d, Sum of Odd = %d, Sum of Even = %d\n",sum,sum-sumE,sumE);
     */
    
    return 0;
}
//Nailed it again