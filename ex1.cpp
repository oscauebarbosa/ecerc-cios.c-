#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float nasc, hoje, result;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe o ano de nascimento: ";
	cin >> nasc;
	
	cout << "Informe o ano atual: ";
	cin >> hoje;

	result = (hoje-nasc);
	
	if (result >=16){
		cout << "Voc� j� pode votar!: " << result << " ";
	}else {
		cout << "N�o � permitido votar com essa idade!";
	}
}

