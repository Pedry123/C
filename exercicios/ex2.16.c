#include <stdio.h>
main() {
    int num;

    printf("Digite um número de cinco dígitos: \n");
    scanf("%d", &num);
    /* ex 12345 */
    printf("%d %d %d %d %d", num / 10000 % 10, num / 1000 % 10, num / 100 % 10, num / 10 % 10, num % 10);
    return 0;
}