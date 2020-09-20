#include <stdio.h>

int areEqual(char const *left, char const *right){
    while(*left && *right && *left==*right){
        left++;
        right++;
    }
    if(*left == *right){
        return 1;
    } else {
        return 0;
    }
    /*
     * Would have been simpler
     * return *left == *right
     */
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
        {"tab\ttab", "tab\ttab"},
    };

    int j;
    for(j = 0; j < sizeof(trials)/sizeof(trials[0]); j++){
        printf("%s\t%s\t", trials[j][0], trials[j][1]);
        if(areEqual(trials[j][0], trials[j][1])){
            printf("are     equal\n");
        } else {
            printf("are not equal\n");
        }
    }

    return 0;

}
