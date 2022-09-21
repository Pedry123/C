#include<stdio.h>
//) Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
int main() {
    int n = 0, soma = 0;  
    do {
        if (n % 3 == 0 || n % 5 == 0) {
            soma += n;
            printf("%d + ", n);
        }
        n++;
    } while (n < 1000);
    printf("%d = %d", n, soma);
    return 0;
}