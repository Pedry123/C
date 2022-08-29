#include <stdio.h>
main() {
    int num1, num2, num3; 
    int soma, media, produto;
    int menor, maior = 0;

    printf("Digite tres numeros inteiros diferentes: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    soma = num1 + num2 + num3;
    media = (num1 + num2 + num3)/3;
    produto = num1 * num2 * num3;
    if (num1 != num2) {
        if (num2 != num3) {
            if (num1 != num3) {
                if (num1 < menor) {
                    menor = num1;
                }
                if (num2 < menor) {
                    menor = num2;
                }
                if (num3 < menor) {
                    menor = num3;
                }
                if (num1 > maior) {
                    maior = num1;
                }
                if (num2 > maior) {
                    maior = num2;
                }
                if (num3 > maior) {
                    maior = num3;
                }
                printf("A soma e %d\nA media e %d\nO produto e %d\nO menor e %d\nO maior e %d\n", soma, media, produto, menor, maior);
            }
        }
    }
}