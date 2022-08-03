#include <iostream>
using namespace std;
int main2() {
	int num, digitoSig;
	cout << "Ingrese un numero: "; cin >> num;
	cout << "\n";
	cout << "numero: " << num << "\n";
	cout << "numero invertido: ";
	do {
		digitoSig = num % 10;
		cout << digitoSig;
		num /= 10;
	} while (num > 0);
	return 0;
}