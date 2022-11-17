#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n = 4;

int preencheMatriz(int matriz[n][n]) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
    return matriz;
}

void busca(int matriz[n][n], int x) {
    int achou = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (matriz[i][j] == x) {
                printf("%d localizado em (%d, %d).\n", x, i, j);
                achou = 1;
            }
        }
    }
    if (achou == 0) {
        printf("Nao encontrado.\n");
    }
}

int main() {
    int matriz[n][n];
    preencheMatriz(matriz);
    busca(matriz, 4);
    return 0;
}