#include <stdio.h>

int main() {
    // Variaveis:
    int MATRICULA = 00000000;
    int IDADE = 99;
    float ALTURA = 9.90;
    float PESO = 999.0;
    char SEXO_FEMININO = 'F';

    // Imprimir:
    printf("Matricula: %.8i\n", MATRICULA);
    printf("Idade: %.2i\n", IDADE);
    printf("Altura: %.2f\n", ALTURA);
    printf("Peso: %5.1f\n", PESO);
    printf("Sexo: %c\n", SEXO_FEMININO);

    return 0;
}