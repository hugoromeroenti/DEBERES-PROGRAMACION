#include <iostream>
using namespace std;

int main() {
	int terminos;

	cout << "A cuantos terminos quieres estimar? ";
	cin >> terminos;

	if (terminos <= 0) {
		cout << "El numero de terminos debe ser mayor que 0";
	}
	else {
		double e = 1.0;
		double factorial = 1.0;
		int contador = 1;

		while (contador < terminos) {
			factorial *= contador;
			e += 1.0 / factorial;
			contador++;
		}
		cout << "Estimacion de e con " << terminos << " terminos es: " << e << endl;
	}
	return 0;
}
