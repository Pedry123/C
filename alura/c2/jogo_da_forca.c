#include<stdio.h>
#include<string.h>

void abertura() {
    printf("**********************\n");
    printf("*   Jogo de Forca    *\n");
    printf("**********************\n\n");
}

void chuta(char chutes[26], int* tentativas) {
    char chute;
      scanf(" %c", &chute); // é bom NO SCANF por espaço pra não dar bug no compliador quando der o enter: isso é bom pra CHAR

    chutes[(*tentativas)] = chute;
    (*tentativas)++;    
}

int main() {
    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");
    // guardar a string no vetor de char: sprintf
    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    printf("%d %d\n", &chutes[0], chutes);
    printf("%d %d %d\n", &chutes[0], &chutes[1], &chutes[2]);
    //Arrays são ponteiros cujos endereços são os mesmos do primeiro valor do array
    //Arrays guardam elementos um do lado do outro
    abertura();

    do {

      for (int i = 0; i < strlen (palavrasecreta); i++) {
        int achou = 0;

        for (int j = 0; j < strlen(palavrasecreta); j++) {
            if (chutes[j] == palavrasecreta[i]) {
                achou = 1;
                break;
            }
        }

        if (achou) {
            printf("%c ", palavrasecreta[i]);
        } else {
            printf("_ ");        
        }
      }
      printf("\n");
      
      chuta(chutes, &tentativas);
      

    } while(!acertou && !enforcou);

}