#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    printf("Enter n: ");
    scanf(" %d",&n);


    int i;
    for(i = 1; i <= n; i += 2){
        printf("%3d ", i);
        if(i%5==4){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
