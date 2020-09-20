#include <stdio.h>
//#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void trim(char *p){
    char *i = p;
    char *j = p;
    while(isspace(*i)){
        i++;
    }
    while(*p++=*i++);

    while(*j){
        j++;
    };

    while(isspace(*--j));
    j++;
    *j='\0';

    if(!*p){
        return;
    }

    char *end = p;
    while(*end){
        end++;
    }
    char *start = p;
    while(*p && isspace(*start)){
        start++;
    }

    if(start == end){
        *p = '\0';
        return;
    }
    while(isspace(*--end));

    *++end = '\0';

    while(*p++ = *start++);
}

int main(){
    char buffer[100] = {0};
    char *trials[] = {
        "    The game is afoot!   ",
        "The    game  is    afoot!",
        "   The game is afoot!",
        "The game is afoot!     ",
        "\n\nNewLines and tabs count as Whitespace\n\n\t\t",
        "\n\tInternal\ttabs\t \tShould Remain  \t",
        "",
        "Empty strings should pass right through",
        "             \t\n\t      ",
        "Strings of all whitespace should be reduced to empty"
    };

    int j;
    for(j = 0; j < sizeof(trials)/sizeof(char *); j++){
        strcpy(buffer, trials[j]);
        trim(buffer);
        printf("-->%s<--\n", buffer );
    }

    return 0;
}
