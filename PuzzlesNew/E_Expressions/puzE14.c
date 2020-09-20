#include <stdio.h>
int main(int argc, char *argv[]){
    int a = 3;
    double b = 1.5;
    double sum;

    sum = a+b+2.0;
    printf("The first sum: %f\n", sum );
    printf("The second sum: %f\n",  sum = a+b );
    sum = sum+0.5;
    printf("The third sum: %f\n", sum );

    return 0;
}
