#include <stdio.h>

int isUppercase(int ch){
    return ch >= 'A' && ch <= 'Z';
    /*return ch >= 0x41 && ch <= 0x5a;*/
}

int toLowerCase(int ch){
    if(ch >= 0x41 && ch <= 0x5a){
        return ch + 32;
    } else {
        /*
         * Forgot this
         */
        return ch;
    }
}
int main(int argc, char *argv[]){
    char trials[] = {'a', 'B', 'C', '+', 'z', 0x33, 0x0C, 0x0D };
    int j, ch;

    for(j = 0; j < sizeof(trials); j++){
        ch = (unsigned int)trials[j];
        printf("%c ", ch);
        printf("to lower case: %c\n", (char)toLowerCase(ch));
    }

    return 0;
}
