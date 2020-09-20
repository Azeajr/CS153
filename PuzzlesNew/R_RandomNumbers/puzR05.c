#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxStars 50
#define N  10000
#define SIZE 9

int randInt(int min, int max);
void plot(int size, int arr[]);
int findMax(int size, int arr[]);
void generate(int size, int arr[], int max, int num_trials);

int randInt(int min, int max){
    return ((long)rand() * (max-min+1))/((long)RAND_MAX+1)+min;
}

void plot(int size, int arr[]){
    double ratio = (double)maxStars / findMax(size, arr);

    int i, j;
    for(i = 0; i < size; i++){
        printf("%3d (%4d):", i, *(arr+i));
        for(j = 0; j < arr[i] * ratio ; j++){
            printf("*");
        }
        printf("\n");
    }

}

int findMax(int size, int arr[]){
    int i, max = arr[0];
    for(i = 0; i < size; i++){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
    }

    return max;
}

void generate(int size, int arr[], int max, int num_trials){
    int i;
    for(i = 0; i < num_trials; i++){
        if(max+1 <= size){
            (*(arr + randInt(0, max)))++;
        }
    }
}

int main(int argc, char *argv[]){
    int x[SIZE+1] = {0};

    generate(SIZE+1, x, SIZE, N);
    plot(SIZE+1, x);

    return 0;
}
