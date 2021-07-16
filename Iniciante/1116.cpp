#include <iostream>
#include <iomanip>

int main() {

	int quantInicial{0};
	int x{0};
	int y{0};

	std::cin >> quantInicial;
	std::cout << std::setprecision(1) << std::fixed;


	for ( int i{0}; i < quantInicial; i++) {

		std::cin >> x >> y;

		if( y == 0 ) std::cout << "divisao impossivel" << '\n';
		else {
			std::cout << static_cast<float>(x) / 
				static_cast<float>(y) << '\n'; 
		}

	}

	return 0;
}
