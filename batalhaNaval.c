#include <stdio.h>
int tabuleiro[10][10];
int a, b;

void initialize(){ // Define todos os índices da matriz do tabuleiro como 0
    for(int i = 0; i < 10; i++){ 
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
}

void defineShips(){ 
    // Navio 1
    tabuleiro[1][1] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[3][1] = 3;
    
    // Navio 2
    tabuleiro[3][6] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[3][8] = 3;


    /*int lineA;
    int columnA;
    printf("Iniciando configuração do seus navios. \n");
    printf("Digite a coordenada do começo do seu navio. \n");
    printf("Linha: \n");
    scanf("%d", &lineA);
    printf("Coluna: \n");
    scanf("%d", &columnA);

    printf("Digite a coordenada do fim do seu navio. \n");
    printf("Linha: \n");
    scanf("%d", &lineB);
    printf("Coluna: \n");
    scanf("%d", &columnB);*/
}

void resultBoard(){ // Imprime o tabuleiro final
    for(int i = 0; i < 10; i++){ 
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int opcao;

    initialize();
    printf("Seja bem vindo ao jogo de Batalha Naval!\n");
    printf("1. Ver regras.\n");
    printf("2. Iniciar jogo.\n");
    printf("3. Ver tabuleiro.\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);
    defineShips();

    switch(opcao){
    case 1:
        printf("Sei lá ainda não tem regra.\n");
        break;
    case 2:
        defineShips();
        break;
    case 3:
        resultBoard();
        break;
    default:
        printf("A opção escolhida não existe.");
        break;
    }
}
