#include <iostream>

int main() {

	int entradaInteiro{0};

	std::cin >> entradaInteiro;

	if (entradaInteiro%2==0) entradaInteiro++;

	for(int i = 0; i<6; i++) { 
	
		std::cout << entradaInteiro << '\n';

		entradaInteiro += 2;

	}

	return 0;
}

