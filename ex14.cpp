#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	
	float lado, result;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe o valor do lado de um quadrado: ";
	cin >> lado;
	
	result = (lado * lado);
	
	if (result){
		cout << "Essa é a area do quadrado: " << result << " ";
	}
}

