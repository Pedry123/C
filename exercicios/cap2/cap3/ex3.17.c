#include <stdio.h>
int main () {
    int s = 0, c = 0;
    float litros, km, taxa, total;

    while (s != -1) {
        printf("Entre com os litros consumidos(-1 para finalizar): ");
        scanf("%f", &litros);
        if (litros == -1) {
            s = -1;
        } else {
            printf("Entre com os quilometros percorridos: ");
            scanf("%f", &km);
            taxa = km / litros;
            total += taxa;
            c++;
            printf("A taxa km/litro para esse tanque foi de %.2f\n\n", taxa);
        }
    }
    printf("A media entre as taxas foi de %.2f.\n", (float) total / c);
    return 0;
}