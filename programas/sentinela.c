#include<stdio.h>
main() {
    int grau, total, contador;
    float media;

    total = 0;
    contador = 0;
    /*printf("Digite o grau. -1 para finalizar: \n");
      scanf("%d", &grau);*/
    while (grau != -1.0) {  /*-1 é sentinela */
        printf("Digite o grau. -1 para finalizar: \n");
        scanf("%d", &grau);
        total = total + grau;
        contador = contador + 1;  
    }
    if (contador != 0) {
        media = (float) total / contador;
        printf("A media eh de %.2f", media);
        /* resultado vai dar 2.33, daí a importância de começar com o printf e scanf antes nesse caso */
    }
}