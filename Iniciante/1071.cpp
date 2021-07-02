#include <iostream>

int main() {

	int entradaInteiro1{0};
	int entradaInteiro2{0};
	int tempInteiro{0};
	int somaNumeros{0};
	
	std::cin >> entradaInteiro1 >> entradaInteiro2;


	if(entradaInteiro1>entradaInteiro2) {
		tempInteiro = entradaInteiro2;
		entradaInteiro2 = entradaInteiro1;
		entradaInteiro1 = tempInteiro;	
	}

	entradaInteiro1++;

	while(entradaInteiro1<entradaInteiro2){
		if(entradaInteiro1%2!=0) somaNumeros += entradaInteiro1;

		entradaInteiro1++;
	}

	std::cout << somaNumeros << '\n';

	return 0;
}


