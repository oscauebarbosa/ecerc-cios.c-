#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float r, result;
	const float pi = 3.14;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe o valor do raio: ";
	cin >> r;

	result = (pi * (r));

	if (result){
		cout << "Esta é a area da circunferÊncia: " << result << " m²";
	}

}
