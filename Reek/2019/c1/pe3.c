#include <stdio.h>

int main(int argc, char *argv[]){
    int ch,line=1,begining=1;
    signed char checksum=-1;
    
    while((ch=getchar())!= EOF){
        if(begining){
            begining=0;
            printf("%d %c",line,ch);
            line++;
            checksum+=ch;
        }else if(ch!='\n'){
            printf("%c",ch);
            checksum+=ch;
        }else if(ch=='\n'){
            checksum+=ch;
            printf(" %d%c",checksum,ch);
            begining=1;
            checksum=-1;
        }
    }
    printf("\n");
}