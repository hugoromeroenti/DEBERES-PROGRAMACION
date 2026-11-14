#include <iostream>
using namespace std;

int main() {
    double pi = 0.0;
    int terminos = 200000;
    double divisor = 1.0;
    bool encontrado = false;

    // Encabezado de la tabla usando tabulaciones (\t)
    cout << "Termino\t\tValor de pi\n";
    cout << "---------------------------\n";

    for (int i = 1; i <= terminos; ++i) {
        // Cálculo de la serie alternando sumas y restas
        if (i % 2 != 0) {
            pi += 4.0 / divisor;
        }
        else {
            pi -= 4.0 / divisor;
        }
        divisor += 2.0;

        // Imprimimos la tabla solo para los primeros 20 términos
        if (i <= 20) {
            cout << i << "\t\t" << pi << "\n";
        }

        // Comprobar si es la primera vez que el valor empieza por 3.14159
        // Multiplicamos por 100000 y lo convertimos a entero para comparar los primeros 6 dígitos
        if (!encontrado && int(pi * 100000) == 314159) {
            cout << "\nSe alcanza el valor 3.14159 por primera vez en el termino: " << i << "\n";
            encontrado = true; // Cambiamos la bandera para que no lo vuelva a imprimir
        }
    }

    return 0;
}
