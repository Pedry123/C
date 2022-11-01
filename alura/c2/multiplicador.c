#include<stdio.h>

int abertura(int m) {
    printf("Tabuada do %d\n\n", m);
}

int main() {

    int multiplicador = 2;

    abertura(2);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
    }

    return 0;
}