#include <stdio.h>

void mostrarFibonacci() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    printf("Sucesión de Fibonacci: %d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}