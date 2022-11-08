#include<stdio.h>

int divisao(int a, int b) {
    if (b > a) {
        return 0;
    }
    return 1 + divisao(a - b, b);
}

int main() {
    printf("%d\n", divisao(4, 2));
    return 0;
}