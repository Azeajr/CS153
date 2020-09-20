#include <stdio.h>

int substr(char dst[], char src[], int start, int len){
    int i=0;
    
    if(src[start]==0 || start<0 || len<0){
        dst[0]=0;
        return 0;
    }
    
    for(i=start;i<start+len;i++){
        if(src[i]!=0){
            dst[i-start]=src[i];
            if(i==start+len-1){
                dst[i-1]=0;
                return i;
            }
        }else if(src[i]==0){
            dst[i-start]=0;
            return i;
        }
    }
}

int main(int argc, char *argv[]){
    char source[]="Those";
    char destination[]="This is the Original.";
    
    printf("%s\n%s\n",source,destination);
    
    printf("Length of dst: %d\n",substr(destination,source,3,3));
    
    printf("%s\n%s\n",source,destination);
}