#include <stdio.h>

int main() {
    printf("-----------------------------------\n");
    printf("       N O T A    L E G A L        \n");
    printf("-----------------------------------\n");
    printf("Item           Qntd     Prc   Valor\n");
    printf("%-15s %03i %8.2f %6.2f\n", "Caneta Azul", 2, 2.0, 4.0);
    printf("%-15s %03i %8.2f %6.2f\n", "Borracha", 1, 5.0, 5.0);
    printf("%-15s %03i %8.2f %6.2f\n", "Resma de papel", 1, 10.0, 10.0);
    printf("-----------------------------------\n");
    printf("                    TOTAL: R$ %3.2f\n", 19.00);

    return 0;
}