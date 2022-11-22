#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
    int forca;
    char *nome;
} Time;

void partida(Time *t1, Time *t2) {
    srand(time(NULL));
    if (t1 -> forca == t2 -> forca)
        printf("%s %d x %d %s", t1 -> nome, rand() % 3, rand() % 3, t2 -> nome);
}

int main() {
    Time *fla, *pal;
    fla = malloc(sizeof(Time));
    pal = malloc(sizeof(Time));
    fla -> forca = 5;
    fla -> nome = "Flamengo";
    pal -> forca = 5;
    pal -> nome = "Palmeiras";
    partida(fla, pal);
    free(fla);
    free(pal);
    return 0;
}