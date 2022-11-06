#include<stdio.h>
#include<stdlib.h>

char** mapa;
int linhas, colunas;
int main() {
    // matriz de 5 x 10
    //matrizes são ponteiros que apontam para uma lista de ponteiros, que apontam para endereços de memória
    // ponteiro de ponteiros: int** copia = numeros;
     //por causa do \0



    FILE* f;
    f = fopen("mapa.txt", "r");
    if (f == 0) {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

fscanf(f, "%d %d", &linhas, &colunas);
printf("linhas %d colunas %d\n", linhas, colunas);

//////////
mapa = malloc(sizeof(char*) * linhas);
for(int i = 0; i < linhas; i++) {
    mapa[i] = malloc(sizeof(char) * (colunas + 1)); //+1 pelo /0
}
//////////

//////////////////alocação dinâmica de memória
 //aloca quantos bytes vai usar: manualmente
//pra alocar em um array, multiplica pelo número de elementos o sizeof(tipo)

//////////////////

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
    for(int i = 0; i < linhas; i++) {
        free(mapa[i]);
    }
    free(mapa);
}