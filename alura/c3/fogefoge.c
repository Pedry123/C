#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"
#include "mapa.h"

MAPA m;

int acabou() {
    return 0;
}

void move(char direcao) {
    int x;
    int y;

    // ache a posicao do foge foge
    for(int i = 0; i < m.linhas; i++) {
        for(int j = 0; j < m.colunas; j++) {
            if (m.matriz[i][j] == '@') {
               x = i;
               y = j;
               break; 
            }
        }
    }

    switch(direcao) {
        case 'a':
            m.matriz[x][y - 1] = '@';
            break;
        case 'w':
            m.matriz[x - 1][y] = '@';
            break;
        case 's':
            m.matriz[x + 1][y] = '@';
            break;
        case 'd':
            m.matriz[x][y + 1] = '@';
            break; 
    }
    //dois pacmans no mapa, tem que tirar um
    m.matriz[x][y] = '.';
}

int main() {
    // matriz de 5 x 10
    //matrizes são ponteiros que apontam para uma lista de ponteiros, que apontam para endereços de memória
    // ponteiro de ponteiros: int** copia = numeros;
     //por causa do \0
     
    leMapa(&m);

    do {
        imprimeMapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while(!acabou());
    liberaMapa(&m);
    


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