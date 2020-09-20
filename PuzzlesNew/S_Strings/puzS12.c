#include <stdio.h>

int stringCompare(char const *left, char const *right){
    while(*left && *right && *left == *right){
        left++;
        right++;
    }
    /*
     * Could have been as simple as return *left-*right;
     */
    if(*left==*right){
        return 0;
    } if( *left < *right){
        return -1;
    } else {
        return 1;
    }

}

int main(int argc, char *argv[]){
    char *trials[][2] = {
        {"a", "a"},
        {"a", "f"},
        {"abc", "abc"},
        {"abc", "def"},
        {"abcdef", "abcdef"},
        {"abcdef", "aaaaaa"},
        {"abcdeff", "abcdef"},
        {"abcdef", "xabcdef"},
        {"xabcdef", "abcdef"},
        {"abcdef", "rats"},
        {"abbccf", "cc"},
        {"abcdefg", "g"},
        {"apple", ""},
        {"", "apple"},
        {"",""},
        {"green", "green"},
        {"ASBC", "ASBC"},
        {"    ", "    "},
        {"12345", "12345"},
        {"++-!@#", "++-!@#"},
        {"tab\ttab", "tab\ttab"}
    };

    int j;
    for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ ){
        int result =  stringCompare( trials[j][0], trials[j][1] ) ;
        if ( result==0 ){
            printf("%s\t==\t%s\n", trials[j][0], trials[j][1] );
        }else if ( result<0){
            printf("%s\t<\t%s\n", trials[j][0], trials[j][1] );
        }else{
            printf("%s\t>\t%s\n", trials[j][0], trials[j][1] );
        }
    }

    return 0;
}
