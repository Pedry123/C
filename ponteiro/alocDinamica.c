#include<stdio.h>
#include<stdlib.h> // tem que usar para alocacao dinamica

int main() {
    int *ptr = malloc(sizeof(int));
    free(ptr);
    ptr = NULL;
    if (ptr == NULL) {
        printf("Ponteiro vazio.\n");
        exit(0);
    }
    *ptr = 10;
    printf("O endereco de memoria eh %p, e o conteudo eh %d", ptr, *ptr);
    
    return 0;
}