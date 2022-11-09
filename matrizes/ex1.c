#include<stdio.h>

int preencherMatriz(int matriz[4][6]) {
    int c = 1;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            matriz[i][j] = c;
            c++;
        }
    }
}

int printMatriz(int matriz[4][6]) {
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            printf("%2d\t", matriz[i][j]);
        }
        printf("\n");
    }

}

int main() {

    int ruas[4][6];
    preencherMatriz(ruas);
    printMatriz(ruas);

    return 0;
}