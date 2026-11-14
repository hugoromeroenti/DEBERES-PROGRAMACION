#include <iostream>
using namespace std;

// Función que recibe un entero y devuelve el número con sus cifras invertidas
int invertir(int n) {
    int invertido = 0;

    // Mientras queden cifras en el número original
    while (n > 0) {
        // Extraemos la última cifra y la añadimos al final del número invertido
        invertido = (invertido * 10) + (n % 10);
        // Eliminamos la última cifra del número original
        n /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    // Pedimos al usuario que introduzca un número
    cout << "Introduce un numero entero para invertir sus cifras: ";
    cin >> numero;

    // Llamamos a la función y mostramos el resultado
    int resultado = invertir(numero);
    cout << "El numero invertido es: " << resultado << "\n";

    return 0;
}
