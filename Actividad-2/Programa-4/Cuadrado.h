#include "Rectangulo.h"

class Cuadrado : public Rectangulo {
public:
    Cuadrado(double lado, const string& color)
        : Rectangulo(lado, lado, color) {}

    void display() const override {
        cout << "Cuadrado [Color: " << color << ", Lado: " << Rectangulo::calcularArea() / Rectangulo::calcularPerimetro() << "]\n";
    }
};