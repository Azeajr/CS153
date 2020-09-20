#include <stdio.h>
int isWhitespace(int ch){
    return ch == ' ' || (ch >= 0x09 && ch <= 0x0d);
    /*return ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v' || ch == '\f';*/
}

int main(int argc, char *argv[]){
    char trials[] = {'a', 'B', ' ', '+', 'z', 0x33, 0x09, 0x0A, 0x0B, 0x0C, 0x0D };
    int j, ch;

    for(j = 0; j < sizeof(trials); j++){
        ch = (int)trials[j];
        printf("%02X ", ch);
        if(isWhitespace(ch)){
            printf("is whitespace\n");
        } else {
            printf("is NOT whitespace\n");
        }
    }

    return 0;
}
