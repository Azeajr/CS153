#include <stdio.h>
int isUppercase( int ch ) {
    return ch >= 'A' && ch <= 'Z';
}

int toLowerCase( int ch ) {
    if(isUppercase(ch)){
        return ch + 32;
    } else {
        return ch;
    }
}

int main( int argc, char *argv[] ) {
    char trials[] = {'a', 'B', 'C', '+', 'z', 0x33, 0x0C, 0x0D};
    int j, ch;

    for( j = 0; j < sizeof(trials); j++) {
        ch = (unsigned int) trials[j];
        printf("%c ", ch);
        printf("to lower case: %c\n", (char)toLowerCase(ch) );
    }
    return 0;
}
