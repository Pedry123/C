#include<stdio.h>
int main () {
    int num, i = 0;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &num);
    do {
        if (num <= 0) {
            printf("Voce nao digitou um numero inteiro positivo.\n");
        } else {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
        i++;
        printf("%d", num);
        printf("%d", i);
    } while (i < num);
    return 0;
    //vai ser terminada ainda
}