/*
 * CS153 Program Assignment #2
 * Normal Distribution
 * Antonio Zea Jr.
 * 09152019
 */


#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
/*
 * Function Prototype.  Could have fully defined
 * the function instead.  Why would you?  One
 * reason might be that you have two functions
 * that refer  to one another.
 */
double normal(double x, double sigma, double mu);

int main(int argc, char *argv[])
{
    double x,sigma,mu;
    int j,N;
    
    printf("Enter mean u(mu): ");
    scanf("%lf",&mu);
    
    printf("Enter standard deviation s(sigma): ");
    scanf("%lf",&sigma);
    
    if(sigma==0)
    {
        printf("Standard Deviation can not equal zero.");
        return 0;
    }
    
    printf("Enter number of values(N): ");
    scanf("%d",&N);
    
    for(j=1;j<=N;j++)
    {
        printf("Enter x value %d: ",j);
        scanf("%lf",&x);
        /*
         * The .12 specifies how many digits after the 
         * decimal to show. Not sure if there was another
         * way to get the output properly formated.
         */
        printf("f(x) = %.12lf\n",normal(x,sigma,mu));
    }
    
}

double normal(double x, double sigma, double mu)
{
    return (1/sqrt(2*M_PI*sigma*sigma))*exp(-0.5*(x-mu)*(x-mu)/(sigma*sigma));
}