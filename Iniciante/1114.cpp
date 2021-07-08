#include <iostream>

int main() {

	int senha{0};

	while(true) {

		std::cin >> senha;

		if( senha != 2002 ) std::cout << "Senha Invalida" << '\n';
		else {
			std::cout << "Acesso Permitido" << '\n';
			return 0;
		}	
	}

}

