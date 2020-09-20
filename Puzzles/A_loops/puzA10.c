#include<stdio.h>

int main(int argc, char *argv[])
{
    int j;
    for(j=0;j<=24;j++)
    {
        if(j%5==4)
        {
            printf("%4d\n",j);
        } else {
            printf("%4d ",j);
        }
    }
    return 0;
}