#include <stdio.h>
main() {
    int n1, n2, n3, n4, n5;
    int menor, maior = 0;

    printf("Digite cinco numeros inteiros: \n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    if (n1 > maior) {
        maior = n1;
    }
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    if (n4 > maior) {
        maior = n4;
    }
    if (n5 > maior) {
        maior = n5;
    }
    if (n1 < menor) {
        menor = n1;
    }
    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    if (n4 < menor) {
        menor = n4;
    }
    if (n5 < menor) {
        menor = n5;
    }
    printf("O maior valor e %d.\n", maior);
    printf("O menor valor e %d.", menor);
    return 0;
}