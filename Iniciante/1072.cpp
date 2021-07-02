#include <iostream>

int main() {
	
	int quantidadeInputs{0};
	int valorInteiro{0};
	int valorInterador{0};
	int quantidadeInput{0};

	std::cin >> quantidadeInputs;

	valorInterador = quantidadeInputs;

	while(valorInterador>0) {
		std::cin >> valorInteiro;

		if(valorInteiro >= 10 && valorInteiro <= 20) 
			quantidadeInput++;

		valorInterador--;
	}

	std::cout << quantidadeInput << " in" << '\n';
	std::cout << quantidadeInputs - quantidadeInput << " out" << '\n';

	return 0;
}
