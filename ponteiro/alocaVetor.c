#include<stdio.h>

int main() {
    int *vetor, i, n;
    scanf("%d", &n);
    vetor = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("%d", vetor[2]);
    free(vetor); // sempre usar free() para nao dar memory leak
    return 0;
}