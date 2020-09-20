#include <stdio.h>
typedef struct{
    int x, y;
} Point;

typedef struct{
    int r,g,b;
} Color;

typedef struct{
    Point a,b,c;
    Color color;
} Triangle;

void printPoint(Point *p){
    printf("x: %d\ty: %d\n",p->x,p->y);
}

void printColor(Color *c){
    printf("r: %d\tg: %d\tb: %d\n",c->r,c->g,c->b);
}

void printTriangle(Triangle *t){
    printPoint(&t->a);
    printPoint(&t->b);
    printPoint(&t->c);
    printColor(&t->color);
}

int main(int argc, char *argv[]){
    Point p0={-32,77}, p1={345,490}, p2={140,389};
    Color c={230, 120, 54};
    
    Triangle tri = {p0, p1, p2, c};
    
    printTriangle( &tri);
    
    return 0;
}