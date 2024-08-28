#include "Cuadrado.h"

class Triangulo : public Forma{
    private:
      double lado1;
      double lado2;
      double lado3;

    public:
      Triangulo(double lado1, double lado2, double lado3, const string& color)
        : Forma(color), lado1(lado1), lado2(lado2), lado3(lado3) {}

      double calcularArea() const override {
        double s = (lado1 + lado2 + lado3) / 2;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
      }

      double calcularPerimetro() const override {
        return lado1 + lado2 + lado3;
      }

      void display() const override {
        cout << "Triangulo [Color: " << color << ", Lados: " << lado1
                  << ", " << lado2 << ", " << lado3 << "]\n";
      }
};