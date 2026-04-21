#include <stdio.h>
// #include <cs50.h> 

double average(int length[], int N);

int main(void){
    // Arrays
    const int N = 3;
    int scores[N];

    for(int index = 0; index < N; index++){
        scores[index] = get_int("Score: ");
    }

    double funAvg = average(scores, N);
    printf("Average: %f\n", funAvg);
}

double average(int length[], int N){
    int sum = 0;
    for(int index = 0; index < N; index++){
        sum += length[index];
    }

    double media = (double) sum / N;

    return media;
}
