#include<stdio.h>

int main(int argc, char *argv[])
{
    int j;
    /*
    my solution

    for(j=0;j<=49;j++)
    {
        printf("%d\n",2*j+1);
    }
    */
    //book solution
    for(j=1;j<=99;j+=2)
    {
        printf("%3d\n",j);
    }
    return 0;
}