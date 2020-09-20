#include <stdio.h>

int main(int argc, char *argv[]){
    int ch,line=1,begining=1;
    signed char checksum=-1;
    
    while((ch=getchar())!= EOF){
        if(begining){
            begining=0;
            printf("%d %c",line,ch);
            line++;
        }else if(ch!='\n'){
            printf("%c",ch);
        }else if(ch=='\n'){
            checksum+=ch;
            printf("%c",ch);
            begining=1;
        }
    }
    printf("\n");
}