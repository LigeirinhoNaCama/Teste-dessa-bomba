#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do "banco de dados" — você pode mudar os campos
typedef struct {
    int id;
    char nome[50];
    int idade;
} Usuario;

// Função para adicionar um novo usuário
void adicionarUsuario() {
    FILE *arquivo = fopen("banco_dados.dat", "ab");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    Usuario usuario;
    printf("ID: ");
    scanf("%d", &usuario.id);
    getchar(); // Limpar buffer
    printf("Nome: ");
    fgets(usuario.nome, 50, stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = 0; // Remover a quebra de linha
    printf("Idade: ");
    scanf("%d", &usuario.idade);

    fwrite(&usuario, sizeof(Usuario), 1, arquivo);
    fclose(arquivo);
    printf("Usuario adicionado com sucesso!\n");
}

// Função para listar todos os usuários
void listarUsuarios() {
    FILE *arquivo = fopen("banco_dados.dat", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    Usuario usuario;
    printf("\n--- Lista de Usuarios ---\n");
    while (fread(&usuario, sizeof(Usuario), 1, arquivo)) {
        printf("ID: %d\nNome: %s\nIdade: %d\n\n", usuario.id, usuario.nome, usuario.idade);
    }

    fclose(arquivo);
}

// Função para buscar um usuário pelo ID
void buscarUsuario() {
    FILE *arquivo = fopen("banco_dados.dat", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    int id;
    printf("Digite o ID para buscar: ");
    scanf("%d", &id);

    Usuario usuario;
    int encontrado = 0;
    while (fread(&usuario, sizeof(Usuario), 1, arquivo)) {
        if (usuario.id == id) {
            printf("ID: %d\nNome: %s\nIdade: %d\n", usuario.id, usuario.nome, usuario.idade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuario com ID %d não encontrado.\n", id);
    }

    fclose(arquivo);
}

// Função principal com menu
int main() {
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar Usuario\n");
        printf("2. Listar Usuarios\n");
        printf("3. Buscar Usuario por ID\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarUsuario();
                break;
            case 2:
                listarUsuarios();
                break;
            case 3:
                buscarUsuario();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    printf("\nPressione qualquer tecla para sair...\n");
    getchar(); // Pega o enter deixado pelo scanf
    getchar(); // Agora sim espera uma tecla de verdade
    
    return 0;
}