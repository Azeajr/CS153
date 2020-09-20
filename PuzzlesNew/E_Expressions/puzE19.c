#include <stdio.h>

int fun04(){
    printf(" World\n");
    return 4;
}

int fun03(){
    printf(" Goodbye \n");
    return 3;
}

int fun07(){
    printf(" Cruel \n");
    return 7;
}

int main(int argc, char *argv[]){
    int result;
    result = fun03() + fun07() + fun04();

    return 0;
}
