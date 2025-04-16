#include <stdio.h>

int main(){

    // Variavel das casas
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // Movimento de Torre - FOR

    printf("Movimento da Torre \n");
    for (int i = 0; i < torre; i++){
        printf("Direita\n");   
    }
    printf("Torre andou %d casas para direita \n", torre);

    // Movimento do Bispo - While

    printf("Movimento do Bispo\n");

    while (bispo > 0){
        printf("Cima, Direita \n");
        bispo--;
    }
    printf("Bispo andou 5 casas em diagonal \n");

    // Movimento Rainha - Do/While
    
    printf("Movimento da Rainha \n");
    do {
        printf("Esquerda \n");
        rainha--;

    } while (rainha > 0 );
    printf("Rainha andou 8 casas para esquerda\n");
    
    return 0;
}