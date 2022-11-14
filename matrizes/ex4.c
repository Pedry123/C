#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencherMatriz(int x, int y, int matriz[x][y]) {
    int c = 0;
    srand(time(NULL));
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            matriz[i][j] = rand() % 20;
        }
    }
}

void printMatriz(int x, int y, int matriz[x][y]) {
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            printf("%43d", matriz[i][j]);
        }
        printf("\n");
    }
}

int maiorque10(int x, int y, int matriz[x][y]) {
    int c = 0;

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if (matriz[i][j] > 10) {
                c++;
            }
        }
    }

    return c;
}

int main() {
    int x, y, cont;

    printf("Entre com o numero de linhas e colunas, respectivamente, da sua matriz: \n");
    scanf("%d %d", &x, &y);

    int matriz[x][y];

    preencherMatriz(x, y, matriz);
    printMatriz(x, y, matriz);
    cont = maiorque10(x, y, matriz);
    printf("%d\n", cont);

    return 0;
}