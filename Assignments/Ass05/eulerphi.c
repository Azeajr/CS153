#include <math.h>

int phi(int n){
    int i,temp;
    double total;
    
    total=temp=n;
    if(temp%2==0){
        total*=1-(1.0/2);
        while(temp%2==0){
            temp/=2;
        }
    }
    
    
    for(i=3;i<sqrt(n);i+=2){
        if(temp%i==0){
            total*=1-(1.0/i);
            while(temp%i==0){
                temp/=i;
            }
        }
    }
    if(temp>2){
        total=total-1.0;
    }
    return (int)total;
}