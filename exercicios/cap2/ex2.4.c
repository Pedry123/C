#include<stdio.h>
/* Escreva uma instrução (ou comentário) para realizar cada um dos pedidos seguintes: */
/* a) Crie um comentário declarando que um programa calculará o produto de três números 
inteiros. */
main() {
    /*Este programa calculará o produto de três números inteiros. */
    /* b) Declare as variáveis x, y, z e resultado como sendo do tipo int. */
    int x, y, z, resultado;
    /* c) Peça ao usuário para digitar três números inteiros. */
    printf("Digite tres nemeros inteiros: \n");
    /* d) Leia os três números inteiros fornecidos através do teclado e armazene-os nas variáveis x, 
    y e z */
    scanf("%d%d%d", &x, &y, &z);
    /* e) Calcule o produto dos três números inteiros contidos nas variáveis x, y e z e atribua o 
    resultado à variável resultado */
    resultado = x * y * z;
    /* ) Imprima "O produto e" seguido do valor da variável resultado. */
    printf("O produto e %d", resultado);
    return 0;
}