#include <stdio.h>

int recStrlength(char *p){
    if(*p == '\0'){
        return 0;
    } else {
        /*
         * Experienced some issiues here with segmentation fault.  Basically the
         * base case was never reached so it recursively ran ifinitely.
         * Realized that it p need to be incremented first then fed to
         * recStrlength.
         */
        return 1 + recStrlength(++p);

    }
}

int strlength(char *p){
    int count = 0;
    while(*p != '\0'){
        p++;
        count++;
    }

    /*
     * This was a neater way of handling it.
     */
    /*while(*p++){
        count++;
    }*/

    return count;
}

int main(int argc, char *argv[]){
    char *trials[] = {"String of length 19", "X", "", "Yet another string", "End of\nlines should\nwork fine."};

    int j, ch;

    for(j = 0; j < sizeof(trials)/sizeof(char *); j++){
        printf("%s\nis length %d\n\n", trials[j], recStrlength(trials[j]));
    }

    return 0;
}
