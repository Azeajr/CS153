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

const int MAXLINELENGTH = 50;
const int MAXWORDLENGTH = 7;
const int N = 100;

int main(int argc, char *argv[]){
    srand(time(NULL));

    int i, j, k, length;
    for(i = 0, j = 0; j < N; j++){
        length = randInt(1, MAXWORDLENGTH);

        if(i + length > 50){
            printf("\n");
            i = 0;
        }

        for(k = 0; k < length; k++){
            printf("%c", randCharFreq());
            i++;
        }
        if(i%50 == 49){
            printf("\n");
            i=0;
        } else {
            printf(" ");
            i++;
        }
    }

    printf("\n");
    return 0;
}
