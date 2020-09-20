#include <stdio.h>

int main(int argc, char *argv[]){
    int n;

    printf("Enter N: ");
    scanf(" %d",&n);

    int i;
    for(i = 0; i < n; i++){
        printf("%3d\n",2*i+1);
    }

    return 0;
}
