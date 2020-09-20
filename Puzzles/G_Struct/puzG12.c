#include <stdio.h>

typedef enum {hot, cold} cupStyle;
typedef enum {ml, oz} units;

typedef struct{
    cupStyle temp;
    units unit;
    int capacity;
} Cup;


void printCup(Cup *cup){
    char *stylestring, *unitstring;
    if(cup->temp==hot){
        stylestring = "hot cup";
    } else{
        stylestring = "cold cup";
    }
    
    if(cup->unit==ml){
        unitstring = "ml";
    } else{
        unitstring = "oz";
    }
    
    printf("%3d %s %s\n", cup->capacity,unitstring,stylestring);
}


int main(int argc, char *argv[]){
    Cup cupA = {hot, oz, 16} , cupB = {cold, ml, 500};
    
    
    printCup(&cupA);
    printCup(&cupB);
    
    return 0;
}