#include "Forma.h"

class Rectangulo : public Forma{
private:
    double longitud;
    double anchura;

public:
    Rectangulo(double longitud, double anchura, const string& color)
        : Forma(color), longitud(longitud), anchura(anchura) {}

    double calcularArea() const override {
        return longitud * anchura;
    }

    double calcularPerimetro() const override {
        return 2 * (longitud + anchura);
    }

    void display() const override {
        cout << "Rectangulo [Color: " << color << ", Largo: " << longitud
                  << ", Ancho: " << anchura << "]\n";
    }
};