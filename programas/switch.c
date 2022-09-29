#include<stdio.h>
int main(){
    char grau;
    int countA = 0, countB = 0, countC = 0;

    printf("Entre com o caractere em questão.\n");
    printf("Entre com EOF para encerrar o programa.\n");
    while ((grau = getchar()) != EOF) {
        switch(grau) {
            case 'a':
            case 'A':
                ++countA;
                break;
            case 'b':
            case 'B':
                ++countB;
                break;
            case 'c':
            case 'C':
                ++countC;
                break;
            case ' ':
            case '\n':
                break;
            default:
                printf("Caractere nao reconhecido.\n");
                printf("Digite a, b ou c.\n");
                break; //só por estética, esse último break não é necessário.
        }
    }
    printf("A contagem de A's foi %d.\n", countA);
    printf("A contagem de B's foi %d.\n", countB);
    printf("A contagem de C's foi %d.\n", countC);
    return 0;
}