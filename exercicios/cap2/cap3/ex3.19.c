#include <stdio.h>
int main() {
    float vendas, sal = 0;
    int  i = 0;

    while (i != -1) {
        printf("Entre com a venda em dolares: ");
        scanf("%f", &vendas);
        if (vendas == -1) {
            i = -1;
        } else {
            sal = 200.0 + 0.09 * vendas;
            printf("Salario: %.2f\n", sal);
        }
    }
     return 0;
}