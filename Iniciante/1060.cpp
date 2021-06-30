#include <iostream>

int main() {

	float entradaNumero{0.0f};
	int quantidadeInteiro{0};

	for (int i=0; i < 6; i++){
		std::cin >> entradaNumero;
		if ( entradaNumero > 0 ) quantidadeInteiro++;
	}

	std::cout << quantidadeInteiro << " valores positivos" << '\n';

	return 0;
}
