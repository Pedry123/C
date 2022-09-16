#include <stdio.h>
int main() {
    int conta, i = 0;
    float saldo0, saldo, cob, cre, lim;

    while (i != -1) {
        printf("Digite o numero da conta (-1 para finalizar): ");
        scanf("%d", &conta);
        if (conta == -1) {
            i = -1;
        } else {
            printf("Digite o saldo inicial de dividas: ");
            scanf("%f", &saldo0);
            printf("Digite o total de cobrancas: ");
            scanf("%f", &cob);
            printf("Digite o total de creditos: ");
            scanf("%f", &cre);
            printf("Digite o limite de credito: ");
            scanf("%f", &lim);
            saldo = saldo0 + cob - cre;
            if (saldo > lim) {
                printf("\nConta: %d\n", conta);
                printf("Limite de credito: %.2f\n", lim);
                printf("Saldo: %.2f\n", saldo);
                printf("Limite de credito excedido.\n\n");
            } else {
                printf("Limite nao excedido.\n\n");
            }
        }
    }
}