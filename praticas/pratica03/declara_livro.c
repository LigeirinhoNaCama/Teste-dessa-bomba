#include <stdio.h>

int main() {
    // Variaveis:
    int ISBN = 0000000000000;
    int NUM_PAGINAS = 000;
    float PRECO = 0000.00;
    int PUBLICADO_EM = 0000;
    
    // Imprimir:
    printf("ISBN: %.13i\n", ISBN);
    printf("Num. Paginas: %.3i\n", NUM_PAGINAS);
    printf("Preco: %07.2f\n", PRECO);
    printf("Publicado em: %.4i\n", PUBLICADO_EM);

    return 0;
}