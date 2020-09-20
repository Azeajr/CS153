/*
 * Program checks that all braces are paired.  Omits braces found
 * within comments, string and character literals.
 */


#include <stdio.h>

int main(int argc, char *argv[]){
    int ch,count_L=0, count_R=0,comment=0,stringLit=0,charLit=0;
    
    while((ch=getchar())!=EOF){
        /*
         * This piece was tricky because I wanted to make sure that
         * the two characters for a comment were identified.  I resolved
         * this by calling getchar a second time and comparing that
         * result to the original getchar call.  I also checked if the
         * eof was pulled instead of the character that I expected.
         */
        if(!comment && ch=='/' && (ch=getchar())!=EOF &&  ch=='*'){
            comment=1;
        }else if(comment && ch=='*' && (ch=getchar())!=EOF &&  ch=='/'){
            comment=0;
        }
        /*
         * If the second character from the comment check was not * then
         * it will still filter through the rest of the code ensuring
         * nothing was missed.
         */
        if(!stringLit && ch=='"'){
            stringLit=1;

        }else if(stringLit && ch=='"'){
            stringLit=0;
        }
        
        if(!charLit && ch=='\''){
            charLit=1;
        }else if(charLit && ch=='\''){
            charLit=0;
        }
        
        if(!charLit && !stringLit && !comment && ch=='{'){
            count_L++;
        } else if(!charLit && !stringLit && !comment && ch=='}'){
            count_R++;
        }
    }
    
    if(count_L > count_R){
        printf("Missing right bracket.\n");
    } else if(count_L < count_R){
        printf("Missing left bracket.\n");
    } else{
        printf("All brackets paired.\n");
    }
}