#include <iostream>
#include <iomanip>

int main() {

	float entradaNumero{0.0f};
	int quantidadeInteiro{0};
	float mediaValoresPositivos{0.0f};
	for (int i=0; i < 6; i++){
		std::cin >> entradaNumero;
		if ( entradaNumero > 0 ) {
			quantidadeInteiro++;
			mediaValoresPositivos += entradaNumero;		
		}
	}

	mediaValoresPositivos = mediaValoresPositivos/quantidadeInteiro;

	std::cout << std::setprecision(1) << std::fixed;
	std::cout << quantidadeInteiro << " valores positivos" << '\n';
	std::cout << mediaValoresPositivos << '\n';
	return 0;
}

