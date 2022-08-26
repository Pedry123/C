/* Declare do tipo int as variáveis c, estaVariavel, q76354 e numero. */
#include<stdio.h>
main() {
    int c, estaVariavel, q76354, numero;
/*Peça ao usuário para fornecer um inteiro. Termine sua mensagem (prompt) com dois 
pontos (:) seguidos de um espaço e deixe o cursor posicionado após o espaço.*/

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    printf("Numero digitado: %d\n", numero);
/* Leia um inteiro digitado no teclado e armazene na variável a o valor fornecido. */
    int a = numero;
    if (numero != 7) 
        printf("A variavel numero nao e igual a 7\n");
    printf("Este e um programa em C\n");
    printf("Este e \num programa em C\n");
    printf("Este\ne\num\nprograma\nem\nC\n");
    printf("Este\te\tum\tprograma\tem\tC\n");
/*aqui é outro exercício */
    a = 2;
    printf("O resto de %d dividido por %d e %d", numero, a, numero % a);
    return 0;
};