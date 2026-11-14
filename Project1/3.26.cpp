#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un entero de cuatro cifras a cifrar: ";
    cin >> numero;

    // PASO 1: Extraer cada cifra por separado
    int d1 = numero / 1000;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    // PASO 2: Sumar 7 a cada cifra y sacar el resto al dividir entre 10
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    // PASO 3: Intercambiar 1ª con 3ª
    int temp = d1;
    d1 = d3;
    d3 = temp;

    // Intercambiar 2ª con 4ª
    temp = d2;
    d2 = d4;
    d4 = temp;

    // PASO 4: Mostrar el resultado uniendo las cifras
    cout << "El numero cifrado es: " << d1 << d2 << d3 << d4 << "\n";

    return 0;
}
