#include <stdio.h>

void conversiones() {
    int Integer = 10;
    float Float;

    Float = Integer;

    printf("Conversión implícita:\n");
    printf("Valor entero: %d\n", Integer);
    printf("Valor convertido a float: %.2f\n\n", Float);

    double Double = 9.87654321;
    int Integer2;

    Integer2 = (int)Double;

    printf("Conversión explícita:\n");
    printf("Valor double original: %.8f\n", Double);
    printf("Valor convertido a int: %d\n", Integer2);
}