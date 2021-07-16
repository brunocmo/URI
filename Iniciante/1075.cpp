#include <iostream>

int main() {

	int entradaValor{0};

	std::cin >> entradaValor;

	for (int i = 1; i<=10000 ; i++) {
		if ( i%entradaValor == 2 ) std::cout << i << '\n';
	}

	return 0;
}
