#include<stdio.h>
#include<stdlib.h>

char** mapa;
int linhas, colunas;

void liberaMapa() {
    for(int i = 0; i < linhas; i++) {
        free(mapa[i]);
    }
    free(mapa);
}

void alocaMapa() {
    mapa = malloc(sizeof(char*) * linhas);
    for(int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * (colunas + 1));
    }
}

void leMapa() {
    FILE* f;
    f = fopen("mapa.txt", "r");
    if (f == 0) {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }
    fscanf(f, "%d %d", &linhas, &colunas);
    alocaMapa();
    for(int i = 0; i < 5; i++) {
        fscanf(f, "%s\n", mapa[i]);
    }
    fclose(f);
}

void imprimeMapa() {
    for(int i = 0; i < 5; i++) {
        printf("%s\n", mapa[i]);
    }
}

int acabou() {
    return 0;
}

void move(char direcao) {
    int x;
    int y;

    // ache a posicao do foge foge
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if (mapa[i][j] == '@') {
               x = i;
               y = j;
               break; 
            }
        }
    }

    switch(direcao) {
        case 'a':
            mapa[x][y - 1] = '@';
            break;
        case 'w':
            mapa[x - 1][y] = '@';
            break;
        case 's':
            mapa[x + 1][y] = '@';
            break;
        case 'd':
            mapa[x][y + 1] = '@';
            break; 
    }
    //dois pacmans no mapa, tem que tirar um
    mapa[x][y] = '.';
}

int main() {
    // matriz de 5 x 10
    //matrizes são ponteiros que apontam para uma lista de ponteiros, que apontam para endereços de memória
    // ponteiro de ponteiros: int** copia = numeros;
     //por causa do \0
    leMapa();

    do {
        imprimeMapa();

        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while(!acabou());

    


//////////

//////////

//////////////////alocação dinâmica de memória
 //aloca quantos bytes vai usar: manualmente
//pra alocar em um array, multiplica pelo número de elementos o sizeof(tipo)

//////////////////

   
    /*
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", mapa[i][j]);
        }
    }
    */

   //lembrar de fechar o arquivo0

}