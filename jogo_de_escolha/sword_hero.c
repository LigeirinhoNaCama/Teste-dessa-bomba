#include <stdio.h>

int main() {
    int escolha;

    printf("Bem-vindo a sua aventura!\n");
    printf("Voce esta em frente a duas portas misteriosas...\n");
    printf("1. Entrar na porta da esquerda\n");
    printf("2. Entrar na porta da direita\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Voce entrou em uma sala escura e encontrou um bau brilhante.\n");
        printf("O que deseja fazer?\n");
        printf("1. Abrir o bau\n");
        printf("2. Ignorar o bau e seguir em frente\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("O bau estava cheio de tesouros! Voce venceu!\n");
        } else {
            printf("Voce seguiu em frente, mas caiu em uma armadilha. Fim de jogo.\n");
        }

    } else if (escolha == 2) {
        printf("Voce entrou em uma floresta encantada.\n");
        printf("Um estranho te oferece uma pocao. Aceitar?\n");
        printf("1. Sim\n");
        printf("2. Não\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("A pocao te deu superpoderes! Você se tornou um heroi lendario!\n");
        } else {
            printf("Sem a pocao, voce se perdeu na floresta. Fim de jogo.\n");
        }

    } else {
        printf("Escolha invalida! O mundo desabou por sua indecisao. Fim de jogo.\n");
    }

    return 0;
}