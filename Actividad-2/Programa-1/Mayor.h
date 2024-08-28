#include <stdio.h>

void encontrarMayor() {
    int num1, num2, num3, greater;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        greater = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greater = num2;
    } else {
        greater = num3;
    }

    printf("El número mayor es: %d\n", greater);
}