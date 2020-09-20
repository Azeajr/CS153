#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    
    printf(" *x=%d *y=%d\n", *x, *y);
    temp = *x;
    *x = *y;
    *y = temp;
    printf(" *x=%d *y=%d\n", *x, *y);
}

void main(void){
    int a = 44, b = 77;
    printf("a=%d  b=%d\n", a, b ) ;
    swap( &a, &b ) ;
    printf("a=%d  b=%d\n", a, b ) ;
}