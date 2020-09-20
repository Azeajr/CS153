#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    for(i = 0; i <= 24; i++){
        printf("%3d ",i);
        if(i%5 == 4){
            printf("\n");
        }
    }

    return 0;
}
