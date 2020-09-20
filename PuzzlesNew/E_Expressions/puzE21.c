#include <stdio.h>

int main(int argc, char *argv[]){
    double x = 12.3, y = 7.2, a = 3.2, b = 10.4;
    double result;

    result =((x * x) + (y * y))/(a-b);

    printf("result: %f\n", result);

    return 0;
}
