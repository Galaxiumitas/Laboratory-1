#include <stdio.h>

void mostrarNumeros() {
    int i;

    printf("Número\tDecimal\tOctal\tHexadecimal\n");
    printf("------\t-------\t-----\t-----------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\t\t%d\t\t%o\t\t%x\n", i, i, i, i);
    }
}