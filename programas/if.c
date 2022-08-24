#include<stdio.h>
main(){
    int num1, num2;
    
    printf("Digite dois numeros inteiros");
    printf(" e eu direi a relacao entre eles.\n");
    scanf("%d%d", &num1, &num2);
    if (num1 == num2) 
        printf("%d e igual a %d\n", num1, num2);
    if (num1 != num2) 
        printf("%d nao e igual a %d\n", num1, num2);
    if (num1 < num2)
        printf("%d e menor que %d\n", num1, num2);
    if (num1 > num2)
    printf("%d e maior que %d\n", num1, num2);
    if (num1 <= num2)
        printf("%d e menor que ou igual a %d\n", num1, num2);
    if (num1 >= num2)
        printf("%d e maior que ou igual a %d\n", num1, num2);
    return 0; /* indica que o programa foi executado com sucesso */
}