#include "Datos.h"

float calcularPromedio(struct Estudiante estudiantes[], int n) {
  float suma = 0.0;
  for (int i = 0; i < n; i++) {
      suma += estudiantes[i].calificacion;
  }
  return suma / n;
}

float encontrarMaxima(struct Estudiante estudiantes[], int n) {
  float maxima = estudiantes[0].calificacion;
  for (int i = 1; i < n; i++) {
      if (estudiantes[i].calificacion > maxima) {
          maxima = estudiantes[i].calificacion;
      }
  }
  return maxima;
}

float encontrarMinima(struct Estudiante estudiantes[], int n) {
  float minima = estudiantes[0].calificacion;
  for (int i = 1; i < n; i++) {
      if (estudiantes[i].calificacion < minima) {
          minima = estudiantes[i].calificacion;
      }
  }
  return minima;
}