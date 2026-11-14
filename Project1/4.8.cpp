#include <iostream>
using namespace std;

int main() {
    int producto = 1;

    // El bucle empieza en 1 y avanza de 2 en 2 para recorrer solo los impares (1, 3, 5...)
    for (int i = 1; i <= 15; i += 2) {
        producto *= i;
    }

    cout << "El producto de los enteros impares del 1 al 15 es: " << producto << "\n";

    return 0;
}
