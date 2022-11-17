#include<stdio.h>

int main() {
    int *p = calloc(3, sizeof(int)); // int *p = malloc(3 * sizeof(int));
    //calloc ja atribui zero por default a todos os bits
    printf("%p %d", p, *p);
    return 0;
}