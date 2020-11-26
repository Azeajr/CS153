#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int randInt(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1) + min;
}

double randDouble(){
    return (double)rand()/((double)RAND_MAX+1);
}

char randCharFreq(){
    double alpha[26] = {
        0.08167, 0.01492, 0.02782, 0.04253, 0.12702, 0.02228, 0.02015, 0.06094,
        0.06966, 0.00153, 0.00772, 0.04025, 0.02406, 0.06749, 0.07507, 0.01929,
        0.00095, 0.05987, 0.06327, 0.09056, 0.02758, 0.00978, 0.0236 , 0.0015 ,
        0.01974, 0.00074
    };

    int i;
    for(i = 1; i < 26; i++){
        alpha[i] += alpha[i-1];
    }

    double value = randDouble();

    i = 0;
    while(value > alpha[i]){
        i++;
    }

    return i + 'a';
}

const int maxWordLength = 7;
const int maxLineLength = 50;
const int maxSenLength = 20;

char* randWord(int wordLen, int cap){
    //char temp[wordLen + 1];
    // Used this because the array needed to be allocated in the heap so that it continues to exist after the function ends
    char *temp = malloc((wordLen+1) * sizeof(char));

    if(cap){
        temp[0] = randCharFreq() - ' ';
    }else{
        temp[0] = randCharFreq();
    }

    int i;
    for(i = 1; i < wordLen; i++){
        temp[i] = randCharFreq();
    }

    temp[wordLen] = '\0';

    return temp;
}

char* randSentence(int senLen){
    int wordLen;

    char *temp = malloc((senLen*maxWordLength+1) * sizeof(char));



    int i, j, index = 0;
    for(i = 0; i < senLen; i++){
        wordLen = randInt(1,maxWordLength);
        if(i == 0){
            char *newWord = randWord(wordLen, TRUE);
            for(j = 0; j < wordLen; j++){
                temp[index++]=newWord[j];
            }
            free(newWord);
        }else{
            int capitol = !randInt(0,15);
            char *newWord = randWord(wordLen, capitol);
            for(j = 0; j < wordLen; j++){
                temp[index++]=newWord[j];
            }
            free(newWord);
        }
        if(i == senLen-1){
            temp[index++] = '.';
            temp[index++] = '\0';
        }else{
            temp[index++] = ' ';
        }
    }

    return temp;
}

char* randParagraph(int paraLen){
    char *temp = malloc((paraLen*(maxSenLength*maxWordLength+maxSenLength)) * sizeof(char));

    char *newSentence;
    int senLen;

    int i, count = 0;
    for(i = 0; i < paraLen; i++){
        senLen = randInt(1,maxSenLength);
        int j;
        for(j = 0; j < senLen; j++){
            int wordLen = randInt(1,maxWordLength);
            if(i == 0){
                char *newWord = randWord(wordLen, TRUE);
                for(j = 0; j < wordLen; j++){
                    temp[count++]=newWord[j];
                }
                free(newWord);
            }else{
                int capitol = !randInt(0,15);
                char *newWord = randWord(wordLen, capitol);
                for(j = 0; j < wordLen; j++){
                    temp[count++]=newWord[j];
                }
                free(newWord);
            }
            if(i == senLen-1){
                temp[count++] = '.';
                temp[count++] = '\0';
            }else{
                temp[count++] = ' ';
            }
        }
                

    }


    return temp;
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    randParagraph(5);

    printf("\n\n");

    //char * Tst  = randSentence(5);

    //printf("%s", Tst);

    //free(Tst);
    
    return 0;
}

