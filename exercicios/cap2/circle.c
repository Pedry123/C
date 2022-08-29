#include <stdio.h>
main() {
    float raio, diametro, circun, area;
    float pi = 3.14159;

    printf("Escreva um programa que leia o raio de um circulo e imprima seu diametro, o valor de sua circunferencia e de sua area\n");
    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);
    diametro = 2 * raio;
    circun = 2 * pi * raio;
    area = pi * raio * raio;
    printf("Diametro: %f\n", diametro);
    printf("Circunferencia: %f\n", circun);
    printf("Area: %f\n", area);
}