#include <stdio.h>

int main(int argc, char *argv[]){
    int i,ch,linesize=0,maxline=0,line[1000]={0},buffer[1000]={0};
    
    while((ch=getchar())!=EOF){
        if(ch=='\n'){
            buffer[linesize++]=ch;
            if(linesize>maxline){
                maxline=linesize;
                linesize=0;
                for(i=0;i<maxline;i++){
                    line[i]=buffer[i];
                }
            }else{
                linesize=0;
            }
        }else{
            buffer[linesize++]=ch;
        }

    }
    
    for(i=0;i<maxline;i++){
        printf("%c",line[i]);
    }
}