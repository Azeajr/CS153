#include <stdio.h>

void replace(char *str, char old, char new){
    char *s = str;
    /*
     * I alsways forget that I can just write the following.
     * while(*s)
     * 
     */
    while(*s != '\0'){
        if(*s == old){
            *s = new;
        }
        s++;
    }
}

struct test{
    char str[50];
    char old;
    char new;
};



int main(int argc, char const *argv[]) {
    struct test trials[] = {
        {"aaa", 'a', 'b'},
        {"aaa", 'x', 'b'},
        {"abc", 'a', 'b'},
        {"bca", 'a', 'b'},
        {"bca", 'a', 'a'},
        {"aaabbbaaa", 'a', 'b'},
        {"xaxaxa", 'a', 'b'},
        {"XAAxaa", 'a', '*'},
        {"applecart", 'a', 'u'},
        {"blue berry", 'e', 'o'}
    };

    int j;
    for (j=0; j < sizeof(trials)/sizeof(struct test); j++){
        printf( "%s\t", trials[j].str );
        replace( trials[j].str, trials[j].old, trials[j].new );
        printf( "%c\t%c\t%s\n", trials[j].old, trials[j].new, trials[j].str );
    }

    return 0;
}
