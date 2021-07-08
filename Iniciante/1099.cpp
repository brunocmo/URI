#include <iostream> 

void comparacaoInteiros(int* a, int* b) {

	int variavelTemp{};

	if ( *b < *a ) {
		variavelTemp = *b;
		*b = *a;
		*a = variavelTemp; 
	}
}

int main() {

	int numeroIteracoes{0};
	int a{0};
	int b{0};
	int k{0};
	int somaInteiros{0};

	std::cin >> numeroIteracoes;

	while (k<numeroIteracoes) {

		std::cin >> a >> b;

		comparacaoInteiros(&a, &b);

		somaInteiros = 0;

		for(a+=1; a<b; a+=2) {
			if ( a%2!=0 ) somaInteiros+=a;
			else a--;

		}

		std::cout << somaInteiros << '\n';

		
		k++;
	}

	return 0;
}
