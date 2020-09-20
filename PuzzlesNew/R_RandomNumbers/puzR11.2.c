#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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




const int N = 10000000;

int main(int argc, char *argv[]){
    srand(time(NULL));

    int freqArray[26] = {0};
    int i;
    for(i = 0; i < N; i++){
        freqArray[randCharFreq() - 'a']++;
    }

    for(i = 0; i < 26; i++){
        printf("%c: %lf\n", i + 'a', freqArray[i]/(double)N );
    }

    return 0;
}
