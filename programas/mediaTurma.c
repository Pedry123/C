#include <stdio.h>
main() {
    int numAlunos, media, grau, total, media;
    int total = 0;
    int contador = 1;
    
    printf("Digite quantos alunos tem a turma: \n");
    scanf("%d", &numAlunos);
    while(contador <= numAlunos) {
        printf("Digite o grau do aluno %d\n", contador);
        scanf("%d", &grau);
        total = total + grau;
        contador = contador + 1;
    }
    media = total / numAlunos;
    printf("A media da turma e %d\n", media);
    return 0;
}