#include <stdio.h>
#include <ctype.h>

int UpperOrLower(char letter) {
    return isupper(letter);
}

void verificarLetra() {
    char letter;
    printf("Ingrese una letra: ");
    scanf(" %c", &letter);

    if (UpperOrLower(letter)) {
        printf("La letra '%c' es mayúscula.\n", letter);
    } else {
        printf("La letra '%c' es minúscula.\n", letter);
    }
}