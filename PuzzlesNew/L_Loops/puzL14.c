#include <stdio.h>

int main(int argc, char *argv[]){
    int start, finish;

    printf("Enter start: ");
    scanf(" %d", &start);

    printf("Enter finish: ");
    scanf(" %d", &finish);

    int i,j;

    /*for(i=start; i <= finish; i++){
        for(j = i * 100; j <= i * 100 + 99; j++){
            if(j%23 == 0){
                printf("%4d ", j);
            }
        }
        printf("\n");
    }*/

    for(i = start; i <= finish; i++){
        if(i%23){
            j = (i*100/23)*23+23;
        }else{
            j = i*100;
        }

        for(; j <= i*100+99; j+=23){
            printf("%4d ", j);
        }
        printf("\n");
    }

    return 0;
}
