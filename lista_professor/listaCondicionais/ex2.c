#include <stdio.h>
int main () {
    int ano;

    printf("Vamos descobrir se o ano eh bissexto.\nDigite o ano: ");
    scanf("%d", &ano);
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d eh ano bissexto.", ano);
    } else {
        printf("%d nao eh ano bissexto.", ano);
    }
}