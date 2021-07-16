#include <iostream> 

int comparacaoInteiros(int* a, int* b) {

	int variavelTemp{};

	if ( *a <= 0 || *b <= 0 ) return 0;

	if ( *b < *a ) {
		variavelTemp = *b;
		*b = *a;
		*a = variavelTemp; 
	}

	return 1;
}

int main() {

	int valorM{0};
	int valorN{0};
	int somaInteiro{0};

	while (true) {

	somaInteiro = 0;
	std::cin >> valorM >> valorN;

	if( !(comparacaoInteiros(&valorM,&valorN)) ) return 0;

	for(; valorM<=valorN ; valorM++){
		std::cout << valorM << " ";
		somaInteiro += valorM;
	}
		std::cout << "Sum=" << somaInteiro << '\n';

	}


	return 0;
}
