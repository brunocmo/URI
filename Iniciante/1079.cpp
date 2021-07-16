#include <iostream>
#include <iomanip>

int main() {

	int entradaInputs{0};
	float valorFloat{0.0f};
	float resultadoFinal{0.0f};

	std::cout << std::setprecision(1) << std::fixed;
	std::cin >> entradaInputs;


	for (int i=0; i<entradaInputs; i++) {
		std::cin >> valorFloat;
		resultadoFinal = (valorFloat*2);
		std::cin >> valorFloat;
		resultadoFinal += (valorFloat*3);
		std::cin >> valorFloat;
		resultadoFinal += (valorFloat*5);
		resultadoFinal = (resultadoFinal/10);
		std::cout << resultadoFinal << '\n';

	}

	return 0;
}
