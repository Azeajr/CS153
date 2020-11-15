#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

char* word(int wordLen, int cap){
    char temp[worLen + 1];

    if(cap){
        temp[0] = randCharFreq() - ' ';
    }else{
        temp[0] = randCharFreq();
    }

    int i;
    for(i = 1; i < worLen; i++){
        temp[i] = randCharFreq();
    }

    temp[wordLen] = '\0'

    return temp;
}

char* sentence(int startPos){
    int senLen, wordLen;
    senLen = randInt(1,maxSenLength);
    char temp[senLen*maxWordLength];


    int i, j;
    for(i = 0; i < senLen; i++){
        worLen = randInt(1,maxWordLength);



        for(j = 0; j < senLen*maxWordLength]; j++){
            if(startPos % maxLineLength + wordLen > maxLineLength && i == 0){
                char *newWord = word(wordLen, 1);
            }
        }
    }
}
