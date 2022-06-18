#include <iostream>

int main() {

	unsigned int esfera{0};
	unsigned int altura{0};
	unsigned int largura{0};
	unsigned int comprimento{0};
	unsigned int resultado{0};
	unsigned int tamanhoCaixa{0};


	std::cin >> esfera >> altura >> largura >> comprimento;

	if (altura>=esfera)
		if (largura>=esfera)
			if (comprimento>=esfera) 
				std::cout << "S" << '\n';
			else std::cout << "N" << '\n';
		else std::cout << "N" << '\n';
	else std::cout << "N" << '\n';



	return 0;

}
