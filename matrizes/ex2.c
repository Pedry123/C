#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x = 2, y = 2;

void preencherMatriz(int matriz[x][y]) {
    srand(time(NULL));

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

}

void escreverMatriz(int matriz[x][y]) {
    
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void localizaValor(int matriz[x][y]) {
    int maior = matriz[0][0];
    int li, col;

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if (matriz[i][j] >= maior) {
                maior = matriz[i][j];
                li = i;
                col = j;
            }
        }
    }
    printf("A localizacao do maior valor esta na coordenada (%d, %d).\n", li, col);

}

int main() {
    int matriz[x][y];

    preencherMatriz(matriz);
    escreverMatriz(matriz);
    localizaValor(matriz);

   
    return 0;
}