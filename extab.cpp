#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	int numero, qtd
	
	cout << "Informe o n�mero para tabuada: ";
	cin >> numero;
	
	cout << "Informe at� quantos voc� quer que v�: ";
	cin >> qtd;
	
	for (int x = 0; x <= 10; x++){
		cout << numero << " X " << x << " = " << numero * x << endl;
	}
}
