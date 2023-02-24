#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float f1,p1,p2,result;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe a frequência de 0 a 100: ";
	cin >> f1;
	
	if (result >=25){
		cout << "Você passou com a frequência: " << result << " . Parabéns";
	}else {
		cout << "Reprovado por fequência! ";
	}

	cout << "Informe a primeira nota: ";
	cin >> p1;
	
	cout << "Informe a segunda nota: ";
	cin >> p2;
	
	result = (p1+p2) / 2;
	
	if (result >=6){
		cout << "Você passou com a nota: " << result << " . Parabéns";
	}else {
		cout << "Reprovado! ";
	}

}
