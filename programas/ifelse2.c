#include <stdio.h>
main() {
    int grau;
    printf("Digite o grau do aluno: \n");
    scanf("%d", &grau);
    if (grau >= 90) {
        printf("A\n");
    } else if (grau >= 80) {
        printf("B\n");
    } else if (grau >= 70) {
        printf("C\n");
    } else if (grau >= 60) {
        printf("D\n");
        printf("teste\n");
        /* pra ser mais de uma instrução dentro do bloco if tem que ter chaves {} */
    } else {
        printf("F\n");
    }
}