//Programa do Ricardo.
#include <iostream>

int main(void){
	
	int i;
	
	std::cout <<  "Digite um numero de 1 a 5\n";
	std::cin >> i;
	
	switch(i){
		case 1:
			std::cout << "\nprimeiro numero";
			break;
		case 2:
			std::cout << "\nsegundo numero";
			break;
		case 3:
			std::cout << "\nterceiro numero";
			break;
		case 4:
			std::cout << "\nquarto numero";
			break;
		case 5:
			std::cout << "\nquinto numero";
			break;
		default:
			std::cout << "opcao invalida";
			break;	
	}
	
	return 0;
}
