#include <stdio.h>

int main(int argc, char *argv[])
{
    int j, start, finish;
    printf("Enter start: ");
    scanf("%d",&start);
    printf("Enter finish: ");
    scanf("%d",&finish);
    if(start>=finish)
    {
        /*
         * Checking for even number and finding first odd.
         */
        if(start%2==0)
        {
            start--;
        }
        for(j=1;start>=finish;j++)
        {
            printf("%3d ",start);
            start-=2;
            if(j%7==0)
            {
                printf("\n");
            }
        }
    } else if(finish>start) {
        /*
         * Checking for even number and finding first odd.
         */
        if(start%2==0)
        {
            start++;
        }
        for(j=1;finish>=start;j++)
        {
            printf("%3d ",start);
            start+=2;
            if(j%7==0)
            {
                printf("\n");
            }
        }
    }
    /*
     * This is looking for a remainder of 1 on the variable
     * j when dividided by 7.  We are looking for 1 and not 0
     * because at the end of th for loop j gets incremented
     * one more time.
     */
    if(j%7!=1)
    {
        printf("\n");
    }
    return 0;
}