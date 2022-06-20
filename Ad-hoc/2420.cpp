#include <iostream>

int main() {

	unsigned int tamanho{0};

	std::cin >> tamanho;

	int valor[tamanho];

	int total{0};

	int parada{0};
	int soma{0};

	for(int i{0}; i < tamanho ; ++i) {
		std::cin >> valor[i];
		total += valor[i];
	}

	total = total/2;

	for(int j{0}; j<tamanho; ++j) {
		if( soma < total )
			soma += valor[j];
		else {
			parada = j;	
			break;
		}
	}

	std::cout << parada << '\n';


	return 0;
}
