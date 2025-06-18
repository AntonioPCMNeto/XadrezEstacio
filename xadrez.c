#include <stdio.h>

// ============================
// Função para mover a Torre usando recursão
// ============================
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // condição para parar a recursão
    }

    printf("Direita\n"); // a torre anda para a direita
    moverTorre(casas - 1); // chamada recursiva
}

// ============================
// Função para mover a Rainha usando recursão
// ============================
void moverRainha(int casas) {
    if (casas <= 0) {
        return; // parar quando não tiver mais casas
    }

    printf("Esquerda\n"); // a rainha vai para a esquerda
    moverRainha(casas - 1); // chamada recursiva
}

// ============================
// Função para mover o Bispo com recursão + loops
// ============================
void moverBispo(int linhas) {
    if (linhas <= 0) {
        return; // condição de parada
    }

    // esse loop simula uma movimentação horizontal (direita)
    for (int i = 0; i < 1; i++) {
        printf("Cima Direita\n"); // o bispo anda na diagonal
    }

    moverBispo(linhas - 1); // chamada recursiva
}

// ============================
// Movimento do Cavalo com loops aninhados
// ============================
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // o cavalo vai andar 2 casas para cima e 1 para direita
    int cima = 2;
    int direita = 1;

    // dois loops para simular as tentativas de movimento
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {

            // se o movimento for exatamente 2 cima e 1 direita, é válido
            if (i == cima && j == direita) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // sair do loop quando o movimento estiver feito
            }

            // se não for esse movimento, a gente ignora
            continue;
        }
    }

    printf("\n"); // separa dos outros
}

// ============================
// Função principal
// ============================
int main() {
    // MOVIMENTO DA TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5); // a torre anda 5 casas para direita
    printf("\n");

    // MOVIMENTO DO BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(5); // o bispo anda 5 casas na diagonal (cima direita)
    printf("\n");

    // MOVIMENTO DA RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8); // a rainha anda 8 casas para esquerda
    printf("\n");

    // MOVIMENTO DO CAVALO
    moverCavalo();

    return 0;
}
