#include <stdio.h>
int main () {
    int i = 0, horas;
    float valor, sal;

    while (i != -1) {
        printf("Entre com o numero de horas trabalhadas(-1 para finalizar): ");
        scanf("%d", &horas);
        if (horas != -1) {
            printf("Entre com o valor da hora normal do trabalhador: ");
            scanf("%f", &valor);
            printf("Salario: %.2f\n", horas <= 40 ? horas * valor : 40 * valor + (horas - 40) * 1.5 * valor);
        } else {
            i = -1;
        }
    }
    return 0;
}