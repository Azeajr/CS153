#include <stdio.h>

int main(int argc, char *argv[]){
    int i,j,bandsize=5,n=24;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i/bandsize%4==0){
                printf("*");
                /*
                 * row/bandsize groups each row
                 * into a set of size bandsize.
                 * 
                 */
            }else if(i/bandsize%4==1){
                printf(".");
            }else if(i/bandsize%4==2){
                printf("o");
            }else if(i/bandsize%4==3){
                printf("+");
            }
        }
        printf("\n");
    }


    /*
     * This was my first attempt.
     */

    /*int i,j,row,col,symbol=35;
    int const n=24;

    row=col=n;
    for(i=0; i<row; i++){

        for(j=0; j<col; j++){
            printf("%c",symbol);

        }
        printf("\n");
        if((i+1)%4==0){
            symbol+=7;
        }
    }*/
}
