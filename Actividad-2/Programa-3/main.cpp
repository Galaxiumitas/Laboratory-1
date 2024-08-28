#include "Primos.h"

int main() {
    int opcion;

    do {
        cout << "\n---- Menú Principal ----\n";
        cout << "1. Determinar si un número es primo\n";
        cout << "2. Identificar números primos en una lista\n";
        cout << "3. Mostrar números primos en un rango\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                cout << "Ingrese un número: ";
                cin >> numero;

                if (esPrimo(numero)) {
                    cout << numero << " es un número primo.\n";
                } else {
                    cout << numero << " no es un número primo.\n";
                }
                break;
            }
            case 2: {
                int n;
                cout << "¿Cuántos números desea ingresar?: ";
                cin >> n;

                vector<int> lista(n);
                cout << "Ingrese los números:\n";
                for (int i = 0; i < n; ++i) {
                    cin >> lista[i];
                }

                vector<int> primos = primosLista(lista);

                cout << "Números primos en la lista: ";
                for (int primo : primos) {
                    cout << primo << " ";
                }
                cout << "\n";
                break;
            }
            case 3: {
                int inicio, fin;
                cout << "Ingrese el inicio del rango: ";
                cin >> inicio;
                cout << "Ingrese el fin del rango: ";
                cin >> fin;

                vector<int> primos = primosRango(inicio, fin);

                cout << "Números primos en el rango [" << inicio << "-" << fin << "]: ";
                for (int primo : primos) {
                    cout << primo << " ";
                }
                cout << "\n";
                break;
            }
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 0);

    return 0;
}
