/*
 * Write a function that operates on two arrays of double precision floats, a 
 * and b. Both arrays are the same size. For each index j, compute 
 * (a[j]-b[j])^2 and add that to a sum.
 */

#include <stdio.h>

double squareDiffArray(int size, double a[], double b[]){
    double sum = 0.0;
    int i;
    for(i = 0; i < size; i++){
        sum += (a[i] - b[i]) * (a[i] - b[i]);
    }

    return sum;
}

void printArrayDouble(int size, double arr[]){
    const int N = 5;
    int j;

    for(j = 0; j < size; j++){
        if(j%N == N-1){
            printf("%8.4lf\n", arr[j]);
        }else{
            printf("%8.4lf ", arr[j]);
        }
    }
}

#define SIZE 10

int main(int argc, char const *argv[])
{
    double x[ SIZE ] = { 2, 0,-3, 0, 0, 0, 0, 0, 0, 0 };
    double y[ SIZE ] = { 2.0, -2.0, -3.0, 2.0, 2.0, 2.0, -2.0, 2.0, 2.0, 2.0  };

    printf("x:\n");
    printArrayDouble( SIZE, x );
    printf("y:\n");
    printArrayDouble( SIZE, y );
    printf("\n");
    printf("sum = %lf\n", squareDiffArray( SIZE, x, y ) );
    
    return 0;
}
