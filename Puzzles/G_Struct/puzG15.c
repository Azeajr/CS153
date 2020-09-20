#include <stdio.h>

typedef struct{
    int x;
    int y;
    /*
     * int x,y;
     */
} Point;

void printPoint(Point *p){
    printf("X: %d\tY: %d\n",p->x,p->y);
}

int main(int argc, char *argv[]){
    Point p1 = {-32,77}, p2 = {345,490};
    printPoint(&p1);
    printPoint(&p2);
    return 0;
}