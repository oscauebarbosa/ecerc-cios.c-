#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	string letra;

	cout << "Informe a letra: ";
	cin >> letra;
	
	if ((letra == "a" or letra == "A") or (letra == "e" or letra == "E") or (letra == "i" or letra == "I") or (letra == "o" or letra == "O") or (letra == "u" or letra == "U")){
		cout << "É uma vogal";
	}else {
		cout << "É uma consoante";
	}

}
