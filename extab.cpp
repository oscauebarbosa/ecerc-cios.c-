#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	int numero, qtd
	
	cout << "Informe o número para tabuada: ";
	cin >> numero;
	
	cout << "Informe até quantos você quer que vá: ";
	cin >> qtd;
	
	for (int x = 0; x <= 10; x++){
		cout << numero << " X " << x << " = " << numero * x << endl;
	}
}
