#include<stdio.h>
int main () {
    int num1, num2, num3;
    int ord1, ord2, ord3;

    printf("Digite tres numeros: \n");
    scanf("%d%d%d",&num1, &num2, &num3);
    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            printf("%d% d %d\n", num3, num2, num1);
        } else {
            printf("%d %d %d\n", num3, num3, num1);
        }   
    } else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            printf("%d %d %d\n", num3, num1, num2);
        } else {
            printf("%d %d %d\n", num1, num3, num2);
        }
    } else if (num3 > num1 && num3 > num2) {
        if (num1 > num2) {
            printf("%d %d %d\n", num2, num1, num3);
        } else {
            printf("%d %d %d", num1, num2, num3);
        }
    }
    return 0;
}