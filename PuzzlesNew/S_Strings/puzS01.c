#include <stdio.h>

int isUppercase(int ch){
    return ( ch >= 0x41 && ch <= 0x5A);
    /*
     * return ch >= 65 && and ch <= 90;
     */
}

int main(void){
    int trials[] = {'a', 'B', 'Z', ' ', '+', 'z', 'Z', 0x33};
    int j, ch;

    for(j = 0; j < sizeof(trials)/sizeof(int); j++){
        ch = trials[j];
        if(isUppercase(ch)){
            printf("%c is upper case\n", ch);
        } else {
            printf("%c is NOT upper case\n", ch);
        }
    }

    return 0;
}
