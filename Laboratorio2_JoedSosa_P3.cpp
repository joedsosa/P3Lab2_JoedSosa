

#include <iostream>
using namespace std;
int fact(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
void crearTriangulo(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
int main() {
	int num;
	cout << "Ingrese un entero positivio: ";
	cin >> num;
	while (num > 0) {
		cout << "El numero debe ser positivo. " << endl;
		cout << "Ingrese un entero positivio: ";
		cin >> num;
	}
	int f = fact(num);
	cout << "El factorial de " << num << "es: " << f << endl;
	cout << "Triangulo de: " << f << "*" << endl;
	crearTriangulo(f);

}


