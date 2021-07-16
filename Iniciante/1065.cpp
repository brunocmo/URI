#include <iostream>

int main() {

	int entradaNumero{0};
	int quantidadeInteiro{0};

	for (int i=0; i < 5; i++){
		std::cin >> entradaNumero;
		if ( entradaNumero%2 == 0 ) {
			quantidadeInteiro++;
		}
	}

	std::cout << quantidadeInteiro << " valores pares" << '\n';
	return 0;
}

