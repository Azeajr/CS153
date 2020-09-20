#include <stdio.h>

int main(int argc, int *argv[]){
    int n;
    printf("Enter n: ");
    scanf(" %d",&n);

    int i, all = 0, odd = 0;
    for(i = 0; i <= n; i++){

        if(i%3 != 0 && i%4 !=0){
            all += i;
            if(i % 2){
                odd += i;
            }
        }


        #if 0
        if(i%3 != 0 && i%4 !=0){
            if(i%2){
                odd += i;
            }else{
                even += i;
            }
        }
        #endif
    }

    printf("Sum = %d, Sum of Odd = %d, Sum of Even = %d\n", all, odd, all - odda);

    return 0;
}
