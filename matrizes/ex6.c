// Matriz triangular inferior e Superior
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n = 5;

void triangularInferior(int matriz[n][n]) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i < j) {
                matriz[i][j] = 0;
            } else {
                matriz[i][j] = 1 + rand() % 10;
            }
        }
    }
}

void triangularSuperior(int matriz[n][n]) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i > j) {
                matriz[i][j] = 0;
            } else {
                matriz[i][j] = 1 + rand() % 10;
            }
        }
    }
}

void printMatriz(int matriz[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[n][n];
    triangularSuperior(matriz);
    printMatriz(matriz);
    printf("\n\n\n");
    triangularInferior(matriz);
    printMatriz(matriz);
    return 0;
}