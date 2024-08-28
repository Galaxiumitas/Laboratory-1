#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

void calcularPotencia() {
    int base, exponent;
    printf("Ingresar un número base: ");
    scanf("%d", &base);
    printf("Ingresar exponente: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
}