#include <iostream>

int main() {

	int quantidadeInputs{0};
	int valorInteiro{0};

	std::cin >> quantidadeInputs;

	for(int i=0; i<quantidadeInputs; i++) {
		std::cin >> valorInteiro;
		
		if ( valorInteiro == 0 ) std::cout << "NULL" << '\n';
		else {
			if ( valorInteiro%2 == 0 ) std::cout << "EVEN ";
	       		else
			   std::cout << "ODD ";

			if ( valorInteiro > 0 ) std::cout << "POSITIVE" << '\n';
		        else std::cout << "NEGATIVE" << '\n';	
		}
	}

	return 0;
}
