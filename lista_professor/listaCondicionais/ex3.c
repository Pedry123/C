#include<stdio.h>
int main() {
    int l1, l2, l3;

    printf("Digite tres valores de tres lados de um triangulo: ");
    scanf("%d%d%d", &l1, &l2, &l3);
    if ((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2)) {
        if (l1 == l2 && l2 == l3) {
            printf("Triangulo equilatero.\n");
        } else if (l1 == l2 || l2 == l3 || l1 == l3) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Nao eh possivel formar um triangulo com essas medidas dos lados.\n");
    }
    return 0;
}