#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    int count = 0;
    int n = 100;

    for(i = 1; i <= n; i++){
        if(i%3 && i%5){
            printf("%2d ", i);
            count++;
            if(count%10 == 0){
                printf("\n");
            }
        }
    }
    printf("\n");

    return 0;
}
