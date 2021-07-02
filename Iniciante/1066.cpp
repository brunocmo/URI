#include <iostream>

int main() {

	int entradaNumero{0};
	int quantidadeInteiro{0};
	int quantidadePositivo{0};
	int quantidadeNegativo{0};

	for (int i=0; i < 5; i++){
		std::cin >> entradaNumero;
		if ( entradaNumero%2 == 0 ) {
			quantidadeInteiro++;
		}
		if ( entradaNumero > 0 ) quantidadePositivo++;
	        if ( entradaNumero < 0 ) quantidadeNegativo++;	
	}

	std::cout << quantidadeInteiro << " valor(es) par(es)" << '\n';
	std::cout << (5-quantidadeInteiro) << " valor(es) impar(es)" << '\n';
	std::cout << quantidadePositivo << " valor(es) positivo(s)" << '\n';
	std::cout << quantidadeNegativo << " valor(es) negativo(s)" << '\n';
	return 0;
}

