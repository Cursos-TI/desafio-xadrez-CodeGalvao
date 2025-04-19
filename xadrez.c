#include <stdio.h>

int main(){

    // Variavel das casas
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1;

    // Movimento de Torre - FOR

    printf("Movimento da Torre \n");
    for (int i = 0; i < torre; i++){
        printf("Direita\n");   
    }

    // Movimento do Bispo - While

    printf("\nMovimento do Bispo\n");

    while (bispo > 0){
        printf("Cima, Direita \n");
        bispo--;
    }

    // Movimento Rainha - Do/While
    
    printf("\nMovimento da Rainha \n");
    do {
        printf("Esquerda \n");
        rainha--;

    } while (rainha > 0 );
    
    // Movimento Cavalo - For + While

    printf("\nMovimento do Cavalo \n");

    while (cavalo --)
    {
       for (int i = 0; i < 2; i++){
        printf("Baixo \n");
       }
       printf("Esquerda \n");
    }
    
    return 0;
}