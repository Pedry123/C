#include<stdio.h>

int joga(int tentativas){
    printf("Joga %d\n", tentativas);
    tentativas++;
    printf("Joga %d\n", tentativas);
}

int main() {
    int tentativas = 0;
    printf("main %d\n", tentativas);
    tentativas++;
    printf("main %d\n", tentativas);
    tentativas++;
    printf("main %d\n", tentativas);

    joga(tentativas);

    printf("main %d\n", tentativas);
    return 0;
}