#include <stdio.h>

int main(int argc, char *argv[]){
    int start;
    printf("Enter start: ");
    scanf(" %d", &start);

    int finish;
    printf("Enter finish: ");
    scanf(" %3d", &finish);

    int i;
    if(start % 2 == 0){
        i = start - 1;
    }else{
        i = start;
    }

    int r = (i - 12) % 7;
    
    for(;i >= finish; i -= 2){
        printf("%3d ", i);
        if(i % 7 == r){
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
