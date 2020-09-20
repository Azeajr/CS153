#include <stdio.h>

int main(int argc, char *argv[]){
    int a = 5, b = 10;
    int result;

    result = a + a / b;
    printf("first result: %d\n", result);

    result = (a + a) / b;
    printf("second result: %d\n", result);

    return 0;
}
