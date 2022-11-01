#include<stdio.h>

int calcula(int* c) { // * não vem inteiro, vem endereço de memória de um inteiro
    printf("calcula %d %d\n", (*c), c);
    (*c)++; //se for só c++ vai mexer no número de endereço de memória, não no valor alocado no endereço de memória.
    printf("calcula %d %d\n", (*c), c);
}

int main() {
    //& representa endereço de memória de uma variável
    int c = 10;

    printf("main %d %d\n", c, &c);
    calcula(&c); //vai ler endereço de memória
    printf("main %d %d\n", c, &c);
}