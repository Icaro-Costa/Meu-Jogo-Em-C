#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void batalha() {
    int jogador_hp = 30;
    int inimigo_hp = 20;
    int escolha;

    printf("Você encontrou um inimigo!\n");
    printf("Inimigo: Slime (HP: %d)\n", inimigo_hp);

    while (inimigo_hp > 0 && jogador_hp > 0) {
        printf("\nO que você quer fazer?\n");
        printf("1. Atacar\n");
        printf("2. Poupar\n");
        printf("> ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            int dano = rand() % 10 + 1;
            inimigo_hp -= dano;
            printf("Você atacou e causou %d de dano! (HP do inimigo: %d)\n", dano, inimigo_hp);
        } else if (escolha == 2) {
            printf("Você poupou o inimigo. Ele fugiu!\n");
            return;
        }

        if (inimigo_hp > 0) {
            int dano_inimigo = rand() % 5 + 1;
            jogador_hp -= dano_inimigo;
            printf("O inimigo atacou e causou %d de dano! (Seu HP: %d)\n", dano_inimigo, jogador_hp);
        }
    }

    if (jogador_hp <= 0) {
        printf("\nVocê foi derrotado...\n");
    } else {
        printf("\nVocê venceu a batalha!\n");
    }
}

void explorar() {
    char comando;
    printf("\nVocê está em uma sala. Escolha um caminho (W/A/S/D): ");
    scanf(" %c", &comando);
    printf("Você escolheu ir para '%c'.\n", comando);
}

int main() {
    srand(time(NULL)); // Semente para aleatoriedade
    printf("Bem-vindo ao jogo estilo Undertale em C!\n");

    while (1) {
        explorar();
        if (rand() % 3 == 0) { // 33% de chance de iniciar batalha
            batalha();
        }
    }

    return 0;
}
