 // Let's roll a dice!
#include<stdio.h>
#include<stdlib.h>
#include<time.h> //opera nos tempos do clock do computador

int main() {
    unsigned semente;
    /* printf("Entre com uma semente: ");
    scanf("%u", &semente); */
    srand(time(NULL));
    for (int i = 1; i <= 20; i++) {
        /* se eu coloco srand dentro do loop, reinicia toda hora a randomização, de modo que não fica mais randômico, e sim o mesmo valor o tempo todo */
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    time_t seconds;
    time(&seconds);
    printf("%ld", seconds); //ld é long int
    return 0; 
}