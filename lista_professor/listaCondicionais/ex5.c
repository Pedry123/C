#include<stdio.h>
int main() {
    float sal, emp;

    printf("Entre com seu salario: ");
    scanf("%f", &sal);
    printf("Entre com o valor da prestacao de emprestimo: ");
    scanf("%f", &emp);
    if (emp > 0.2 * sal) {
        printf("Emprestimo nao concedido.");
    } else {
        printf("Emprestimo concedido");
    }
    return 0;
}