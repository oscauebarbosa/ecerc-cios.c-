#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,result;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe o n�mero: ";
	cin >> n1;
	
	cout << "Informe outro n�mero: ";
	cin >> n2;

	if (n1>n2){
		cout << " N1 � maior que N2";
	}
	
	if (n1<n2){
		cout << " N2 � maior que N1";
	}
	
	if (n1==n2){
		cout << " Os n�meros s�o iguais";
	}
	

}
