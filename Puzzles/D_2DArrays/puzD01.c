#include <stdio.h>

int main(int argc, char *argv[]){
    const int Nrows = 3, Mcols = 5;
    int x[Nrows][Mcols];
    int count = 0;
    int r, c;
    for(r=0; r<Nrows; r++){
        for(c=0; c<Mcols; c++){
            x[r][c]=count++;
        }
    }

    for(r=0; r<Nrows; r++){
        for(c=0; c<Mcols; c++){
            printf("Row: %d Col: %d Val: %d\n",r,c,x[r][c]);
        }
    }

    return 0;
}
