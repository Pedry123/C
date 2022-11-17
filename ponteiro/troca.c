#include<stdio.h>

void troca(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    troca(p, q);
    printf("%d %d", a, b);
    return 0;
}