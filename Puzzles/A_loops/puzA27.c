#include <stdio.h>
int main(int argc, char *argv[]){
    int row, col, n=24, m=6;

    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            /*
             * Althought ((col+row)/m) is mathematically the same as
             * (col/m + row/m), when it comes to integer division the
             * answers will be vastly different due to truncation.
             *
             * Orignaly solution
             * if((col)/m%2==(row)/m%2 )
             */
            if((col/m + row/m)%2==0){
                printf("*");
            } else{
                printf(".");
            }
        }
        printf("\n");
    }

}
