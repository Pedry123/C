#include<stdio.h>
#include<math.h>
//a = p(1+r)^n
int main() {
    //p é quantia investida originalmente, r é taxa de juros, a é quantia pós investimento
    double a, p = 1000.0, r = .05;
    printf("%4s %21s\n\n", "Ano", "Saldo na conta");
    for (int i = 1; i <= 10; i++) {
         a = p * pow(1.0 + r, i);
        printf("%4d%10s%.2f\n\n", i, "R$", a);
    }

    return 0;
}