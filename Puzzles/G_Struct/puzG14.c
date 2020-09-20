#include <stdio.h>

typedef struct{
    int red;
    int blue;
    int green;
}Color;

void printColor(Color *c){
    printf("R: %d\tB: %d\tG: %d\n",c->red,c->blue,c->green);
}

void setColor(Color *c, int r, int b, int g){
    if(c==NULL){
        printf("Invalid color pointer.\n");
    }else if(r >= 0 && r <= 255 &&
             b >= 0 && b <= 255 &&
             g >= 0 && g <= 255){
                 c->red=r;c->blue=b;c->green=g;
    }else{
        printf("Invalid color values.\n");
    }
}

int main(int argc, char *argv[]){
    Color grass,sky;
    
    setColor( &grass, 50, 200, 100 );
    setColor( &sky, 100, 100, 300 );
    
    printColor( &grass );
    printColor( &sky );
    
    return 0;
}