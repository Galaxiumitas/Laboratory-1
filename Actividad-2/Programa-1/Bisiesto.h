#include <stdio.h>

void verificarBisiesto() {
    int year;
    printf("Ingrese un año: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d es un año bisiesto.\n", year);
    } else if (year % 100 == 0) {
        printf("%d no es un año bisiesto.\n", year);
    } else if (year % 4 == 0) {
        printf("%d es un año bisiesto.\n", year);
    } else {
        printf("%d no es un año bisiesto.\n", year);
    }
}