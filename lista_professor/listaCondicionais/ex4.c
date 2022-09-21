#include<stdio.h>
int main() {
    float peso, altura, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 17.0) {
        printf("Abaixo de 17. Tipo A.\n");
    } else if (imc < 18.49) {
        printf("Entre 17 e 18.49. Tipo B.\n");
    } else if (imc < 24.99) {
        printf("Entre 18.5 e 24.99. Tipo C.\n");
    } else {
        printf("Maior que 25. tipo D.\n");
    }
    return 0;
}