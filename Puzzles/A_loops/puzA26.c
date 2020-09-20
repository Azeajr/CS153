#include <stdio.h>

int main(int argc, char *argv[]){
    int row, col,n=17;
    for(row=0; row<n*n; row++){
        if(row%2==0){
            printf("*");
        }else{
            printf(".");
        }

        if((row+1)%n==0){
            printf("\n");
        }

        /*
         * This is the given solution assuming
         * that I used two loops.
         */
        /*if ( (row+col)%2 == 0 )
        printf("*");
      else
        printf(".");*/
    }
}
