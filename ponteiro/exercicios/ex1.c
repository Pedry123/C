#include<stdio.h>

int ordemAlfabetica(char *first, char *second) {
    if (first[0] < second[0]) { // via tabela ASCII
        return 1;
    }
}

int main() {
    char *primeiro = malloc(sizeof(20));
    char *segundo = malloc(sizeof(20));
    scanf("%s", primeiro);
    scanf("%s", segundo);
    printf("%d", ordemAlfabetica(primeiro, segundo));
    return 0;
}