#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    double a, b, c;
    /*
     * Originally screwed this up because I did not realize i had to use scanf
     * with %lf so that a double is correctly read.  Not only do are there bits
     * that are being lost but I also belive that the bits that are read dont
     * correllate.
     */
    printf("Enter a: ");
    scanf("%lf",&a);

    printf("Enter b: ");
    scanf("%lf",&b);

    printf("Enter c: ");
    scanf("%lf",&c);

    double discrim, result;

    discrim = b*b - 4*a*c;

    if(discrim >= 0){
        result = (-b + sqrt(discrim))/(2*a);
        printf("result: %lf\n", result);
        result = (-b - sqrt(discrim))/(2*a);
        printf("result: %lf\n", result);
    }else{
        printf("No real number solution");
    }

    return 0;
}
