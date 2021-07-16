#include <iostream>

int main() {

	int A{0};
	int B{0};

	int resultadoAB{0};
	int resultadoBA{0};

	//bool saida{NULL};

	std::cin >> A >> B;

	resultadoAB = A/B;
	resultadoBA = B/A;

	if ( (resultadoAB*B) == A ) {
		std::cout << "Sao Multiplos" << '\n';
	} else 
		if ( (resultadoBA*A) == B ) {
			std::cout << ("Sao Multiplos") << '\n';
		}
		else
			std::cout << ("Nao sao Multiplos") << '\n';

	return 0;
}
