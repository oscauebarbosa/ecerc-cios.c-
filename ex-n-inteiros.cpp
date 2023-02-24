#include <iostream>

using namespace std;

int main () {
	int num, soma = 0, count = 0;
	do {
		cout << "Digite um numero inteiro positivo: ";
		cin >> num;
		if (num > 0) {
			soma += num;
			count++;
		}
	}while(num >= 0);
	
	if (count ==0) {
		cout << "Nenhum numero foi digitado!" << endl;
	} else {
		cout << "O valor dos numeros digitados foi: " << soma << endl;
	}
}
