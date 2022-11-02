#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"forca.h" //Assinatura das funções

//Variáveis globais
char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesDados = 0;

void abertura() {
    printf("**********************\n");
    printf("*   Jogo de Forca    *\n");
    printf("**********************\n\n");
}

int jaChutou(char letra) {
    int achou = 0;

    for (int j = 0; j < chutesDados; j++) {
        if (chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

void chuta() {
    char chute;
      scanf(" %c", &chute); // é bom NO SCANF por espaço pra não dar bug no compliador quando der o enter: isso é bom pra CHAR

    chutes[chutesDados] = chute;
    chutesDados++;    
}

void desenhaForca() {
    
    int erros = chutesErrados();

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros >= 1 ? '(' : ' '), (erros >= 1 ? '_' : ' '), (erros >= 1 ? ')' : ' '));
    printf(" |      %c%c%c  \n", (erros >= 3 ? '\\' : ' '), (erros >= 2 ? '|' : ' '), (erros >= 3 ? '/' : ' '));
    printf(" |       %c      \n", (erros >= 2 ? '|' : ' '));
    printf(" |      %c %c   \n", (erros >= 4 ? '/' : ' '), (erros >= 4 ? '\\' : ' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");
    
    for (int i = 0; i < strlen (palavrasecreta); i++) {
        
        int achou = jaChutou(palavrasecreta[i]);
        if (achou) {
            printf("%c ", palavrasecreta[i]);
        } else {
            printf("_ ");        
        }
    }
    printf("\n");
}

void escolhePalavra() {
    FILE* f;
    f = fopen("palavras.txt", "r"); //r de read, função fopen devolve um ponteiro 
    if (f == 0) {
        printf("Desculpe, banco de dados indisponível.\n\n");
        exit(1);
    }

    int qntPalavras;
    fscanf(f, "%d", &qntPalavras);

    srand(time(0));
    int randomico = rand() % qntPalavras;

    for(int i = 0; i <= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}

void adicionaPalavra() {
    char quer;

    printf("Voce deseja adicionar uma nova palavra no jogo?(S/N)");
    scanf(" %c", &quer);
    if(quer == 'S') {
        char novaPalavra[TAMANHO_PALAVRA];
        printf("Qual a nova palavra?");
        scanf("%s", novaPalavra);

        FILE* f;
        f = fopen("palavras.txt","r+"); //r+ leitura e escrita
        if (f == 0) {
            printf("Desculpe, banco de daods indisponível.\n");
            exit(1); // 0 deu certo diferente de 0 deu errado
        }
        int qnt;
        fscanf(f, "%d", &qnt);
        qnt++;

        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qnt);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novaPalavra);
        //outras: feof() significa final fgetc() le proximo char fread() fwrite()
        fclose(f);
    }
}

int acertou() {
    for (int i = 0; i < strlen(palavrasecreta); i++) {
        if (!jaChutou(palavrasecreta[i])) {
            return 0;
        }
    }
    return 1;
}

int chutesErrados() {
    int erros = 0;

    for(int i = 0; i < chutesDados; i++) {
        if (!jaChutou(palavrasecreta[i])) erros++;
    }

    return erros;
}

int enforcou() {
    return chutesErrados() >= 5;
}

void fim() {
    if (acertou()) {
        printf("Parabens, voce venceu!");
    } else {
        printf("Que pena! Voce foi enforcado!");
    }
}
int main() {

    // guardar a string no vetor de char: sprintf

    //Arrays são ponteiros cujos endereços são os mesmos do primeiro valor do array

    //Arrays guardam elementos um do lado do outro

    escolhePalavra();
    abertura();

    do {
  
      desenhaForca();
      chuta();
      
    } while(!acertou() && !enforcou());

    fim();
}