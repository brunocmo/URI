#include <iostream>

int main() {

	int entradaValor{0};

	while(1){
	
		std::cin >> entradaValor;

		if( entradaValor == 0 ) break;

		for(int i{1}; i<=entradaValor; i++)
			( i == entradaValor ) ? std::cout << i << '\n'
					      : std::cout << i << " ";

	}

	return 0;

}
