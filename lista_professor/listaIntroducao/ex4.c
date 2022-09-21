#include<stdio.h>
int main() {
    int n, d0, d1, d2;

    printf("Entre com um valor: ");
    scanf("%d", &n);
    d0 = n % 10;
    d1 = n / 10 % 10;
    d2 = n / 100 % 10;
    printf("%d%d%d", d0, d1, d2);
    return 0;
}