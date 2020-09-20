#include <stdio.h>
#include <stdlib.h>

int startsWith(char const *bigString, char const *start){
    while(*bigString && *start && *bigString==*start){
        bigString++;
        start++;
    }
    return !*start;
    //return *start=='\0';
}

char *findSubstring(char const *source, char const *sub){
    while(*source != *sub && *source){
        source++;
    }
    if(*source == '\0'){
        return NULL;
    }

    if(startsWith(source, sub)){
        return (char *)source;
    }else{
        return NULL;
    }
}

int main(int argc, char *argv[]){
    char *trials[][2] = {
        {"abcdef", "a"},
        {"abcdef", "abc"},
        {"abcdef", "d"},
        {"abcdef", "def"},
        {"abcdef", "f"},
        {"abcdef", "xyz"},
        {"abcdef", "axx"},
        {"abcdef", "abcdefg"},
        {"abcdef", "rats"},
        {"abbccddeef", "cc"},
        {"abcdefg", "g"},
        {"applecart", "c"},
        {"green", "apple"},
        {"apple", ""},
        {"", "rats"},
        {"",""}
    };

     int j; char *loc;
     for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ ){
         loc = findSubstring( trials[j][0], trials[j][1] );
         if ( loc )
           printf("%s : %s : %s\n", trials[j][0], trials[j][1], loc );
         else
           printf("%s : %s : %s\n", trials[j][0], trials[j][1], "not found" );
     }

     return 0;
}
