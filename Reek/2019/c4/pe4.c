#include <stdio.h>

void copy_n(char dst[], char src[], int n);

int main(int argc, char *argv[]){
    char first[]= "This is a test of the copy program.";
    char second[]="abcdefghijk";
    int i;
    
    copy_n(first,second,15);
    
    for(i=0;i<17;i++){
        putchar(first[i]);
    }
    putchar('\n');
    
    for(i=0;i<14;i++){
        putchar(second[i]);
    }
    putchar('\n');
}

void copy_n(char dst[], char src[], int n){
    int i,end=0;
    
    for(i=0;i<n;i++){
        if(!end && src[i]!=0){
            dst[i]=src[i];
        }else if(!end && src[i]==0){
            end=1;
            dst[i]=src[i];
        }else if(end){
            dst[i]=0;
        }
    }
}