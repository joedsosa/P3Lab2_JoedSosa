
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <array>
using namespace std;
const int tam = 10;
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
void printArray(char arr[]) {
	for (int i = 0; i < tam; i++){
		cout << arr[i] << " ";
	}
}
void orderArray(char arr[], int tam) {
	for (int i = 0; i < tam - 1; i++){
		for (int j = i + 1; j < tam; j++){
			if (arr[i] > arr[j]) {
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	srand(time(0));
	char opcion;
	bool continuar = true;
	char arr[10];
	do {
		cout << "MENU\n";
		cout << "1. Calcular factorial\n";
		cout << "2. Ordenar arreglo \n";
		cout << "3. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case '1':
			int n;
			cout << "Ingrese un entero positivo: ";
			cin >> n;
			cout << "El factorial de" << n << " es: " << fact(n) << endl;
			crearTriangulo(n);
			break;
		case '2':
			for (int i = 0; i < tam; i++) {
				arr[i] = 'a' + rand() % 26;
			}
			cout << "Random Array generado";
			for (int i = 0; i < tam; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
			orderArray(arr, tam);
			cout << "Arreglo ordenado sin reps";
			for (int i = 0; i < tam; i++) {
				if (arr[i] != '\0') {
					cout << arr[i] << " ";
				}
			}
			cout << endl;
			break;
		case '3':
			cout << "Saliendo del programa" << endl;
			break;
		default :
			cout << "Opcion ivalida" << endl;
		}
		if (opcion != '3') {
			cout << "Desea continuar ? (S / N) :";
			cin >> opcion;
		}

		} while (opcion == 'S' || opcion == 's');
		return 0;
	
}
