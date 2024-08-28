#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Forma{
    protected:
        string color;

    public:
        Forma(const string& color) : color(color) {}
        virtual double calcularArea() const = 0;
        virtual double calcularPerimetro() const = 0;
        virtual void display() const = 0;
        virtual ~Forma() {}
};