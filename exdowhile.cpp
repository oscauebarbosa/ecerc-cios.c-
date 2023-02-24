#include <iostream>

using namespace std;

main (){
	int semana;
	
	do{
		cout << "Informe o dia da semana: ";
		cin >> semana;
		
		switch(semana){
			case 0: cout << "Saindo do programa";
			break;
			case 1: cout << "Domingo\n";
			break;
			case 2: cout << "Segunda-feira\n";
			break;
			case 3: cout << "Terça-feira\n";
			break;
			case 4: cout << "Quarta-feira\n";
			break;
			case 5: cout << "Quinta-feira\n";
			break;
			case 6: cout << "Sexta-feira\n";
			break;
			case 7: cout << "Sabado\n";
			break;
			default: cout << "Informe um dia valido";
		}
	}while(semana != 0);
}
