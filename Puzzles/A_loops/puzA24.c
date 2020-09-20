#include <stdio.h>

int main(int argc, char *argv[])
{
    int band,row,col,n=16;
    
    for(band=0;band<8;band++)
    {
        if(band%2==0)
        {
            for(row=0;row<n/8;row++)
            {
                for(col=0;col<n;col++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else{
            for(row=0;row<n/8;row++)
            {
                for(col=0;col<n;col++)
                {
                    printf(".");
                }
                printf("\n");
            }
            
        }

    }
    /*
     * Need to work out exactly what
     */
    /*
    for ( row=0; row<boardsize; row++ )
    {
        for ( col=0; col<boardsize; col++ )
        {
            if ( (row/bandsize)%2 == 0)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    */
}