#include <stdio.h>

void calcularFactorial() {
    int n;
    unsigned long long factorial = 1;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("¡Error! El factorial de un número negativo no existe.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial de %d = %llu\n", n, factorial);
    }
}