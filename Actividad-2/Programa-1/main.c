#include "Bisiesto.h"
#include "Conversiones.h"
#include "Factorial.h"
#include "Fibonacci.h"
#include "Letra.h"
#include "Mayor.h"
#include "ParImpar.h"
#include "Potencia.h"
#include "DecimalOctalHexa.h"

int main() {
    int opcion;

    do {
        printf("\n--- Menú Principal ---\n");
        printf("1. Verificar si un año es bisiesto\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Calcular la potencia de un número\n");
        printf("4. Verificar si un número es par o impar\n");
        printf("5. Mostrar sucesión de Fibonacci\n");
        printf("6. Verificar si una letra es mayúscula o minúscula\n");
        printf("7. Encontrar el número mayor entre tres números\n");
        printf("8. Mostrar conversiones implícitas y explícitas\n");
        printf("9. Mostrar números del 1 al 10 en octal, decimal y hexadecimal\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                verificarBisiesto();
                break;
            case 2:
                calcularFactorial();
                break;
            case 3:
                calcularPotencia();
                break;
            case 4:
                verificarParImpar();
                break;
            case 5:
                mostrarFibonacci();
                break;
            case 6:
                verificarLetra();
                break;
            case 7:
                encontrarMayor();
                break;
            case 8:
                conversiones();
                break;
            case 9:
                mostrarNumeros();
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 0);

    return 0;
}