#include <stdio.h>

int main(int argc, char *argv[])
{
    int j;
    for(j=0;j<=20;j+=2)
    {
        printf("%3d\n",j);
    }
    /* Alternate Solution
     * for(j=0;j<=10;j++)
     * {
         printf("%3d\n",2*j);
       }
     */
    return 0;
}