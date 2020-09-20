#include <stdio.h>
#include <math.h>

double sqrtLS(double x, double accuracy){
    double bestError=x;
    double bestS=0;
    double s=0.0;
    double error;
    
    
   while((x-s*s)>0){
       printf("s:%lf error:%lf besteEr:%lf\t bestS:%lf\n",s,error=fabs(x-s*s),bestError, bestS);

       if(error<bestError){
           bestError=error;
           bestS=s;
       }
       
       s+=accuracy;

   }
   return bestS;
  
}


int main(int argc, char *argv[]){
    double x, accuracy, s;
    
    printf("Enter x --> ");
    scanf("%lf",&x);
    
    printf("Enter error bound --> ");
    scanf("%lf",&accuracy);
    
    
    s=sqrtLS(x,accuracy);
    printf("sqrtLS(%lf)= %lf s*s = %lf\n",x,s,s*s);
    
    
}