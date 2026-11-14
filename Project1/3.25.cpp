#include <iostream>
using namespace std;

int main() {
	int factorial = 1;
	int numfact;

	cout << "Introduce un numero entero (Porfa que no sea negativo): ";
	cin >> numfact; 

	if (numfact < 0) {
		cout << "El factorial no se puede hacer con numeros negativos" << endl;
	}
	else {
		int contador = numfact;

		while (contador > 1) {
			factorial *= contador;
			contador--;
		}
		cout << numfact << "! = " << factorial << endl;
	}
	return 0;
}
