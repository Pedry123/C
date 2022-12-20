#include<stdio.h>
#include<stdlib.h>

struct registro {
    char* nome;
    char* telefone;
};

int main() {
    struct registro reg;
    reg.nome = "Pedro";
    reg.telefone = "34412864";
    printf("%s", reg.nome);
    return 0;
}