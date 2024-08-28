#include "Calculos.h"

int main() {
    int n;

    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &n);

    struct Estudiante estudiantes[n];

    ingresarDatos(estudiantes, n);
    mostrarDatos(estudiantes, n);

    float promedio = calcularPromedio(estudiantes, n);
    float maxima = encontrarMaxima(estudiantes, n);
    float minima = encontrarMinima(estudiantes, n);

    printf("Calificación promedio: %.2f\n", promedio);
    printf("Calificación más alta: %.2f\n", maxima);
    printf("Calificación más baja: %.2f\n", minima);

    return 0;
}