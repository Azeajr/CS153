#include <stdio.h>

int main(int argc, char const *argv[]){
    int i, sum = 0;
    for(i = 1; i <= 100; i++){
        sum += i;
        printf("%d \t %d\n", i, sum);
        //if(i%10 == 9) printf("\n");
    }

    return 0;
}
