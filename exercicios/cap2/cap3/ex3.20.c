#include <stdio.h>
int main() {
    float c, i, juros;
    int t, s = 0;

    while(s != -1) {
        printf("Entre com o valor do emprestimo(-1 para finalizar): ");
        scanf("%f", &c);
        if (c != -1) {
        printf("Entre com a taxa de juros: ");
        scanf("%f", &i);
        printf("Entre com o periodo do emprestimo em dias: ");
        scanf("%d", &t);
        juros =  (c * i * t) / 365;
        printf("O valor dos juros e: $%.2f\n", juros);
        } else {
            s = -1;
        }
    }
    return 0;
}