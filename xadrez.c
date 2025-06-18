#include <stdio.h>

int main() {
    // ========================
    // Movimento da Torre (for)
    // ========================
    // A torre vai se mover 5 casas para a direita
    printf("Movimento da Torre:\n");

    int i; // variável de controle do loop
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // ========================
    // Movimento do Bispo (while)
    // ========================
    // O bispo vai se mover 5 casas na diagonal: cima + direita
    printf("Movimento do Bispo:\n");

    int contador = 1; // inicia o contador
    while (contador <= 5) {
        printf("Cima Direita\n");
        contador++; // incrementa o contador
    }

    printf("\n");

    // ========================
    // Movimento da Rainha (do-while)
    // ========================
    // A rainha vai se mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");

    int passo = 1; // variável de controle
    do {
        printf("Esquerda\n");
        passo++; // incrementa o passo
    } while (passo <= 8);

    return 0;
}

