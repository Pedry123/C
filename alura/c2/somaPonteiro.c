#include<stdio.h>
int soma(int a, int b, int* num) {
    *num = a + b;
}
int main() {
    int num, a = 4, b = 9;
    soma(a, b, &num);
    printf("A soma eh %d", num);
    return 0;
}
