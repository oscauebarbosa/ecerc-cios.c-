#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float tC,result;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe uma temperatura em Celsius: ";
	cin >> tC;

	result = (tC*1.8+32) ;
	
	cout << "Esta é a temperatura convertida em Fahrenheit: " << result << " ";

}
