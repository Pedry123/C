#include <stdio.h>
main() {
    int n1, n2, res;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d%d", &n1, &n2);
    res = n1 % n2;
    if (res == 0)
        printf("O primeiro inteiro e multiplo do segundo.\n");
    if (res != 0)
        printf("O primeiro inteiro nao e multiplo do segundo.\n");
    return 0;
}
