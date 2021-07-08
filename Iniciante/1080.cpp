#include <iostream>

int main() {

	int entradaVariavel{0};
	int variavelTemp{0};
	int variavelPosicao{0};

	for (int i = 0; i<100; i++){
		std::cin >> entradaVariavel;

		if( variavelTemp < entradaVariavel ) {
			variavelTemp = entradaVariavel;
			variavelPosicao = i+1;
		}

	}

	std::cout << variavelTemp << '\n' << variavelPosicao << '\n';

	return 0;
}
