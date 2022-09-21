#include<stdio.h>
int main() {
    int opcao;
    float v, v0;

    do {
        printf("=======================\n");
        printf(" PROGRAMA DE CONVERSAO\n");
        printf("=======================\n");
        printf("Digite 1 para converter m/s para km/h.\n");
        printf("Digite 2 para converter km/h para m/s.\n");
        printf("Digite 0 para finalizar o programa.\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 0:
                break;
            case 1: 
                printf("Entre com o valor da velocidade: ");
                scanf("%f", &v0);
                v = v0 * 36 / 10;
                printf("%.2f m/s e equivalente a %.2f km/h.\n", v0, v);
                break;
            case 2:
                printf("Entre com o valor da velocidade: ");
                scanf("%f", &v0);
                v = v0 / (36 / 10);
                printf("%.2f km/h e equivalente a %.2f m/s.", v0, v);
                break;
            default:
                printf("Digite 1 ou 2 para conversao. Digito nao reconhecido.\n");
                break;
        }
    } while (opcao != 0);
    return 0;
}