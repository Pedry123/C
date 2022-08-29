#include <stdio.h>
main() {
    int num;
    int res;

    printf("Digite um numero: \n");
    scanf("%d", &num);
    res = num % 2;
    if (res == 0) {
        printf("%d e par.", num);
    }
    if (res == 1) {
        printf("%d e impar.", num);
    }
    /* não precisa das chaves {} no if */
    return 0;
}