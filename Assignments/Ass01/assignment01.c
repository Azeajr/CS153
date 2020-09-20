/*
 * CS153 Program Assignment #1
 * BMI
 * Antonio Zea Jr.
 * 09052019
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    double weight, bmi;
    int height;
    
    printf("Enter your weight in pounds(lbs): ");
    scanf("%lf",&weight);
    
    printf("Enter your height in inches(in): ");
    scanf("%d",&height);
    
    bmi = (weight*703.0)/(height*height);
    
    printf("Your BMI is: %f ",bmi);
    
    if(bmi<18.5)
    {
        printf("underweight\n");
    } else if(bmi>=18.5 && bmi<25.0)
    {
        printf("normal\n");
    } else if(bmi>=25.0 && bmi<30.0)
    {
        printf("slightly overweight\n");
    } else if(bmi>=30.0 && bmi<40.0)
    {
        printf("overweight\n");
    } else
    {
        printf("obese\n");
    }
    
    return 0;
    
}