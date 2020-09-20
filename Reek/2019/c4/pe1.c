#include <stdio.h>

double squareroot(double ai,double n){
    return (ai+n/ai)/2;
}
double sqroot(double ai,double n){
    double next = (ai+n/ai)/2;
    if(ai==next){
        return ai;
    } else{
        return sqroot(next,n);
    }
}


int main(int argc, char *argv[]){
    double ai=1.0,n=100.0;

    while(squareroot(ai,n)!=squareroot(squareroot(ai,n),n)){
        ai=squareroot(squareroot(ai,n),n);
    }
    
    printf("%lf\n",ai);
    printf("%lf\n",sqroot(ai,n));
}