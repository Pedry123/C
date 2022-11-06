#include<stdio.h>

int main() {
    // matriz de 5 x 10
    //matrizes são ponteiros que apontam para uma lista de ponteiros, que apontam para endereços de memória
    // ponteiro de ponteiros: int** copia = numeros;
    char mapa[5][10+1]; //por causa do \0



    FILE* f;
    f = fopen("mapa.txt", "r");
    if (f == 0) {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    for(int i = 0; i < 5; i++) {
        fscanf(f, "%s", mapa[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%s\n", mapa[i]);
    }

    /*
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", mapa[i][j]);
        }
    }
    */

    fclose(f); //lembrar de fechar o arquivo
}