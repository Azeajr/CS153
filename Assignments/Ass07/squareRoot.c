/*
 * CS153 Program Assignment #7
 * Square Root
 * Antonio Zea Jr.
 * 10302019
 */
#include <stdio.h>
#include <math.h>

/*
 * First mistake was making x an int value.
 * Took me forever to find that I had made
 * a bad assumption.  It lead to a truncation
 * error that was hard to trackdown until I
 * rewrote the program from scratch.
 */
double sqrtLS(double x, double accuracy){
    double bestError = x;
    double bestS;
    double error;
    double s = 0.0;


    while( s < x ){
        error = fabs( x-s*s );
        if(error < bestError){
            bestError = error;
            bestS = s;
        }
        s += accuracy;
    }
    return bestS;
}

double sqrtBS(double x, double accuracy){
    double low = 0.0, high = 10.0, mid;
    
    while( low <= high ){
        mid = ( low+high ) / 2;
        
        if(fabs( x-mid*mid ) <= accuracy){
            return mid;
        }
        if(mid*mid < x){
            low = mid;
        }else{
            high = mid;
        }
    }
}

double sqrtNM(double x, double accuracy){
    double s=1.0;
    
    while (fabs( x-s*s ) > accuracy){
        s = ( s+x/s ) / 2;
        /*
         * Originally wrote this without
         * the if statement and returned
         * s after the loop finished.
         * Used this solution instead
         * becasue this is what I thought
         * was meant by the specification.
         */
        if(fabs( x-s*s ) <= accuracy){
            return s;
        }
    }
}

int main(int argc, char *argv[]){
    double x, accuracy, s;
    
    printf("Enter x --> ");
    scanf("%lf", &x);
    /*
     * Tried perror here but did not like that it printed
     * success since nothing had technically failed.
     */
    if(x < 0){
        fprintf(stderr, "Negative values are not allowed.\n");
        return -1;
        
        
    }
    
    printf("Enter error bound --> ");
    scanf("%lf", &accuracy);
    
    
    s=sqrtLS(x, accuracy);
    printf("sqrtLS(%.3lf)= %lf; s*s = %lf\n", x, s, s*s);
    
    s=sqrtBS(x, accuracy);
    printf("sqrtBS(%.3lf)= %lf; s*s = %lf\n", x, s, s*s);
    
    s=sqrtNM(x, accuracy);
    printf("sqrtNM(%.3lf)= %lf; s*s = %lf\n", x, s, s*s);
    
    
}