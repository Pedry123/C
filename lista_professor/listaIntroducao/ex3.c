#include<stdio.h>
int main() {
    int n, d0, d1, d2, d3, d4;

    printf("Digite um inteiro de cinco digitos: ");
    scanf("%d", &n);
    d0 = n % 10;
    d1 = n / 10 % 10;
    d2 = n / 100 % 10;
    d3 = n / 1000 % 10;
    d4 = n / 10000 % 10;
    printf("%d - %d - %d - %d - %d", d4, d3, d2, d1, d0);
    return 0;
}