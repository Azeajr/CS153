#include <stdio.h>

int main(int argc, int *argv[]){
    int n;
    printf("Enter n: ");
    scanf(" %d",&n);

    int i, odd = 0, even = 0;
    for(i = 0; i <= n; i++){
        if(i%2){
            odd += i;
        }else{
            even += i;
        }
    }

    printf("Sum = %d, Sum of Odd = %d, Sum of Even = %d\n", odd+even, odd, even);

    return 0;
}
