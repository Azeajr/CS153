#include <stdio.h>
void deleteFirstN(char *str, int N){
    /*
     * Finally wrote one better than the teacher's solution.
     */
    if(N <= 0) return;
    while(*(str + N)){
        *str = *(str + N);
        str++;
    }
    *str = '\0';
}
struct test{
    char str[50];
    char N;
};

int main(int argc, char const *argv[]) {
    struct test trials[] = {
        {"blue berry", 5},
        {"123456789", 0},
        {"123456789", 1},
        {"123456789", 2},
        {"123456789", 3},
        {"123456789", 4},
        {"123456789", 7},
        {"123456789", 8},
        {"123456789", 9},
        {"123456789", -1},
        {"123456789", -8},
        {"1234", 3},
        {"123", 3},
        {"12", 3},
        {"1", 3},
        {"", 3},
    };

    int j;
    for ( j=0; j < sizeof(trials)/sizeof(struct test); j++ ){
        printf( "\"%s\" - %d =\t", trials[j].str, trials[j].N );
        deleteFirstN( trials[j].str, trials[j].N );
        printf( "\"%s\"\n", trials[j].str );
    }

    return 0;
}
