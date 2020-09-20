#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int stringToInt(char *p){
    int sign;
    if(*p == '-'){
        sign = -1;
        p++;
    } else if(*p == '+') {
        sign = 1;
        p++;
    }else{
        sign = 1;
    }

    /*
     * int sign = 1;
     * if(*p == '+') p++;
     * if(*p == '-'){
     *      sign = -1;
     *      p++;
     * }
     *
     * while(*p >= '0' && *p <= '9'){
     *      val *= 10;
     *      val += *p - '0';
     *      p++;
     * }
     * return sign * val;
     */

    int vaintl = 0;
    while(*p){
        if(*p >= '0' && *p <= '9'){
            val = val * 10;
            val = val + *p - 48;
            p++;
        } else {
            return sign * val;
        }
    }
    return sign * val;
}

int main(int argc, char *argv[]){
    char *trials[] = {
        "1",
        "12",
        "+1",
        "-8",
        "+2003",
        "-345",
        "9876  ",
        "12o5",
        "rats",
        "--oh dear--",
        "+ 234",
        "++45"
    };

    int j;
    for(j = 0; j < sizeof(trials)/sizeof(char *); j++){
        printf("%s is converted into: %d\t\tshould be: %d\n",
            trials[j],
            stringToInt(trials[j]),
            atoi(trials[j]));
    }
    return 0;
}
