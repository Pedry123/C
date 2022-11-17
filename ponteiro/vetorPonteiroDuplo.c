#include<stdio.h>

int main() {
    int **p;
    p = calloc(5, sizeof(int *)); //vetor(ponteiro) de ponteiros

    for(int i = 0; i < 5; i++) {
        p[i] = calloc(3, sizeof(int)); //cada ponteiro com um vetor de 3 blocos: matriz alocada dinamicamente
    }

    for(int i = 0; i < 5; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}