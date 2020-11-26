#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 15;
    int line, col;


    for(line = 0; line < n; line++){
        for(col = 0; col < line; col++){
            printf(".");
        }
        printf("*\n");
    }


    

    return 0;
}
