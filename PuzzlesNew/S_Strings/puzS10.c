#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double stringToDouble(char *p){
    double sign = 1;
    if(*p == '+') p++;
    if(*p == '-'){
        sign = -1;
        p++;
    }

    double intPart = 0.0;
    while(*p != '.' && *p >= '0' && *p <= '9'){
        intPart *= 10;
        intPart += *p - '0';
        p++;
    }

    if(*p == '.') p++;

    int fracPart = 0;
    double placeval = 1;
    while(*p >= '0' && *p <= '9'){
        placeval *= 10;
        fracPart *= 10;
        fracPart += *p - '0';
        p++;
    }

    return (sign * (intPart + (fracPart / placeval)));

}

int main(int argc, char *argv[]){
    char *trials[] = {
        "1",
        "1.2",
        "+1",
        "-8.000",
        "+2003.99",
        "-3.45",
        "98.76  ",
        "12..5",
        "rats",
        "+95.M",
        "+ 234",
        ".999",
        "+1.345E+005"  /* Our function will not work for this */
    };
    int j;
    for(j = 0; j < sizeof(trials)/sizeof(char *); j++){
        printf("%s is converted into: %lf\t\tshould be: %lf\n", trials[j], stringToDouble( trials[j]), atof( trials[j]) );
    }

}
