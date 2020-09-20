#include <stdio.h>

int toLowercase(int ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch + 32;
    } else {
        return ch;
    }
}

void strToLower( char *p){
    while(*p){
        *p = toLowercase(*p);
        p++;

        /*
         * Another method would have been the following
         * *p++ = toLowercase(*p)
         * But I think this makes the code harder to read and understand
         */
    }
}

int main(int argc, char *argv[]){
    char trials[6][100] = {"UPPER CASE + lower case", "X", "", "Yet another string", "End Of\nLines Should\nWork Fine.", "The game is afoot!"};
    int j;
    for(j = 0; j < 6; j++){
        printf("Original: %s\n", trials[j]);
        strToLower(trials[j]);
        printf("Converted: %s\n\n", trials[j]);
    }

    return 0;
}
