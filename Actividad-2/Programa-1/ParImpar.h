#include <stdio.h>

void verificarParImpar() {
    int num;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d es par.\n", num);
    } else {
        printf("%d es impar.\n", num);
    }
}