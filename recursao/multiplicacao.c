#include <stdio.h>

int multiplicacao(int a, int b) {
    if (b == 0) {
        return b;
    }
    return a + multiplicacao(a, b - 1);
}

int main() {
    printf("%d\n", multiplicacao(3, 3));
    return 0;
}