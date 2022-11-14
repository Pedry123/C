#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x = 3, y = 5;

void matriz1(int matriz[x][x]) {
    srand(time(NULL));
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            matriz[i][j] = rand() % 20;
        }
    }
}

int maior1(int matriz[x][x]) {
    int maior = matriz[0][0];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            if (matriz[i][j] >= maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

void matriz2(int matriz[y][y]) {
    srand(time(NULL));
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < y; j++) {
            matriz[i][j] = rand() % 20;            
        }
    }
}

int maior2(int matriz[y][y]) {
    int maior = matriz[0][0];
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < y; j++) {
            if (matriz[i][j] >= maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

void resultante(int matriz[1][2]) {
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[x][x], m2[y][y], res[1][2];
    matriz1(m1);
    matriz2(m2);
    res[0][0] = maior1(m1);
    res[0][1] = maior2(m2);
    resultante(res);
    return 0;
}