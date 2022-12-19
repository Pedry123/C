#include <stdio.h>

int main() {
    int linhas = 5;
    int colunas = 10;
    char** matriz;
    matriz = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++){
        matriz[i] = malloc(sizeof(char) * (colunas + 1)); // quando eh char tem o \0
    }

    for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}