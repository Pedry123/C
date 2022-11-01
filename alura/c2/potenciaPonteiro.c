#include<stdio.h>

int potencia(int* res, int a, int b) {
    *res = 1;
    for (int i = 0; i < b; i++) {
        (*res) *= a;
    }
    return *res;
}

int main() {
    int resultado;
    potencia(&resultado, 4, 4);
    printf("%d", resultado);
    return 0;
}