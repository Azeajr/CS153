/*
 * Delete each instance of a particular character from a string
 */
#include <stdio.h>

void deleteCh(char *str, char ch){
    char *x = str;
    while(*x){
        while(*x==ch) x++;
        *str = *x;
        str++;
        x++;
    }
    *str = '\0';


    /*while(*x){
        if(*str != ch){
            str++;
            x++;
        }else{
            while(*x == ch){
                x++;
            }
            *str = *x;
        }
    }
    *str = *x;*/
}

struct test{
    char str[50];
    char ch;
};

int main(int argc, char const *argv[]) {
    struct test trials[] = {
        {"aXX", 'a'},
        {"XXa", 'a'},
        {"aXX", 'x'},
        {"a",   'a'},
        {"aa",  'a'},
        {"aaa", 'a'},
        {"bca", 'a'},
        {"bcaa", 'a'},
        {"aaabbbaaa", 'a'},
        {"xaxaxa", 'a'},
        {"XAAxaa", 'a'},
        {"applecart", 'a'},
        {"blue berry", 'e'}
    };

    int j;

    for ( j=0; j<sizeof(trials)/sizeof(struct test); j++ ){
        printf( "%s\t\t", trials[j].str );
        deleteCh( trials[j].str, trials[j].ch );
        printf( "%c\t%s\n", trials[j].ch, trials[j].str );
    }

    return 0;
}
