#include "Triangulo.h"

int main() {
    double longitud, anchura, lado, lado1, lado2, lado3;
    string color;

    cout << "Ingresa el color del rectángulo: ";
    cin >> color;
    cout << "Ingresa el largo y ancho del rectángulo: ";
    cin >> longitud >> anchura;
    Rectangulo rect(longitud, anchura, color);

    cout << "Ingresa el color del cuadrado: ";
    cin >> color;
    cout << "Ingresa la longitud del lado del cuadrado: ";
    cin >> lado;
    Cuadrado sq(lado, color);

    cout << "Ingresa el color del triángulo: ";
    cin >> color;
    cout << "Ingresa la longitud del lado del triángulo: ";
    cin >> lado1 >> lado2 >> lado3;
    Triangulo tri(lado1, lado2, lado3, color);

    rect.display();
    cout << "Area: " << rect.calcularArea() << "\n";
    cout << "Perímetro: " << rect.calcularPerimetro() << "\n\n";

    sq.display();
    cout << "Area: " << sq.calcularArea() << "\n";
    cout << "Perímetro: " << sq.calcularPerimetro() << "\n\n";

    tri.display();
    cout << "Area: " << tri.calcularArea() << "\n";
    cout << "Perímetro: " << tri.calcularPerimetro() << "\n";

    return 0;
}