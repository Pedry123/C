#include<stdio.h>
main() {
    int ap = 0, rep = 0;
    int teste, aluno;


    //printf("Digite 1 para aprovado e 2 para reprovado: \n");
    //scanf("%d", &teste); 
    while (ap + rep < 10) {
        printf("Digite 1 para aprovado e 2 para reprovado: \n");
        scanf("%d", &teste);
        if (teste == 1) {
            ap++;
        } else if (teste == 2) {
            rep++;
        } else {
            printf("Numero invalido. Repita o procedimento.");
        }
    }
    printf("Numero de alunos aprovados: %d\n", ap);
    printf("Numero de alunos reprovados: %d\n", rep);
    if (ap > 8) {
        printf("Cobrar Taxa Escolar.");
    }
}