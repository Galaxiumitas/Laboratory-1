#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int identificacion;
    float calificacion;
};

void ingresarDatos(struct Estudiante estudiantes[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nIngrese los datos del estudiante %d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]%*c", estudiantes[i].nombre);
        printf("Identificación: ");
        scanf("%d", &estudiantes[i].identificacion);
        printf("Calificación: ");
        scanf("%f", &estudiantes[i].calificacion);
    }
}

void mostrarDatos(struct Estudiante estudiantes[], int n) {
    printf("\nLista de estudiantes:\n");
    for (int i = 0; i < n; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Identificación: %d\n", estudiantes[i].identificacion);
        printf("Calificación: %.2f\n\n", estudiantes[i].calificacion);
    }
}