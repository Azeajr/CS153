#include <stdio.h>

int main(int argc, char *argv[])
{
    int j, count=0, n=100;
    /*
     * Starting this at zero seems
     * as though it should print it.
     * It does not because it ends
     * up failing the if statement.
     */
    for(j=1;j<=n;j++)
    {
        // Intended solution
        //if(!(j%3==0 || j%5==0))
        if(j%3!=0 && j%5!=0)
        {
            printf("%3d ",j);
            count++;
            if(count%10==0)
            {
                printf("\n");
            }
        }
    }
    if((count%10)!=0) printf("\n");
    return 0;
}