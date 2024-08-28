#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2 || numero == 3) return true;
    if (numero % 2 == 0 || numero % 3 == 0) return false;
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    return true;
}

vector<int> primosLista(const vector<int>& lista) {
    vector<int> primos;
    for (int numero : lista) {
        if (esPrimo(numero)) {
            primos.push_back(numero);
        }
    }
    return primos;
}

vector<int> primosRango(int inicio, int fin) {
    vector<int> primos;
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }
    return primos;
}