 #include <stdio.h>
 #include <string.h>
/*
 * Learned that gets does not work as expected when compared to EOF.
 * Works when I use NULL.  So I think I end up comparing the char
 * pointer that is returned from gets to the integer value of NULL.
 */


int main(int argc, char *argv[]){
    int i;
    char current[30]={0},previous[30]={0},temp[30]={0};    
    
    while(gets(current) != NULL){
        if(previos[0]==0){
            strcpy(previous,current);
        }else if(strcmp(previous,current)==0 && strcmp(temp,current)!=0){
            strcpy(temp,current);
        }
    }
}