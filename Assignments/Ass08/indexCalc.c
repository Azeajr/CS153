/*
 * CS153 Program Assignment #8
 * Index of Coincidence
 * Antonio Zea Jr.
 * 11072019
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, char *argv[]){
    FILE *input;
    int i, ch, azCount[26]={0};
    double IC, NumeratorTotal, DenominatorTotal;
    IC=NumeratorTotal=DenominatorTotal=0.0;
    
    
    /*
     * Checks that the user is using this
     * program as intended.  The name of the
     * file that is serving as our input should
     * be used as a comman line argument.
     */
    if(argc==2){
        input=fopen(argv[1],"r");
    }
    /*
     * Checks if the filename supplied actually
     * exists where it was specified. Perror
     * used to inform where the error is
     * stemming from.  In this case fopen did
     * not return a valid value.
     */
    if(input==NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    
    while((ch=fgetc(input))!=EOF){
        /*
         * Checks if ch is alphabetic or not
         * as well as whether it is lowercase
         * or not. Due to short circuiting
         * nothing gets done if the ch is not
         * alphabetic.
         */
        if(isalpha(ch) && islower(ch)){
            azCount[toupper(ch)-'A']++;
        }else if(isalpha(ch)){
            azCount[ch-'A']++;
        }
    }
    /*
     * Used this loop to calculate top and
     * bottom of the index of coincidence
     * ratio.
     */
    for(i=0;i<26;i++){
        
        /*
         * Used to print the whole array so
         * that I can do frequency analysis
         * on ciphertexts
         * 
         * printf("%c: %d\n",i+'A',azCount[i]);
         */
        
        NumeratorTotal+=azCount[i]*(azCount[i]-1);
        DenominatorTotal+=azCount[i];
    }
    
    IC=NumeratorTotal/(DenominatorTotal*(DenominatorTotal-1)/26);
    printf("IC= %lf\n",IC);
    
    if(fclose(input)!=0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }
    
    return 0;
}