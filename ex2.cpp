#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,result;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe o número: ";
	cin >> n1;
	
	cout << "Informe outro número: ";
	cin >> n2;

	if (n1>n2){
		cout << " N1 é maior que N2";
	}
	
	if (n1<n2){
		cout << " N2 é maior que N1";
	}
	
	if (n1==n2){
		cout << " Os números são iguais";
	}
	

}
