#include <stdio.h>

int main(int argc, char *argv[]){
    int s1,s2,s3;
    
    printf("Enter the three sides of a tringle: ");
    scanf("%d %d %d",&s1,&s2,&s3);
    
    if(!(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)){
        printf("Not a possible triangle.\n");
    } else if(s1==s2 && s2==s3){
        printf("Equilateral.\n");
    } else if(s1!=s2 && s2!=s3 && s1!=s3){
        printf("Scalene.\n");
    } else{
        printf("Isosceles.\n");
    }
    
}