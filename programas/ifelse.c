#include <stdio.h>
main() {
    int grau;

    printf("Digite o grau do aluno: \n");
    scanf("%d", &grau);
    /* 
        if (grau >= 60) {
            printf("Aprovado.\n");
        }
        else {
            printf("Reprovado.\n");
        }          
    */
   printf("%s\n", grau >= 60 ? "Aprovado." : "Reprovado.");
   /* ou */
   grau >= 60 ? printf("Aprovado.\n") : printf("Reprovado.\n");
}