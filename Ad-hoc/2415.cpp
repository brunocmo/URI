#include <iostream>

int main() {

	int nValores{0};
	long int valorAnterior{0};
	long int valorAtual{0};
	int pontuacaoSequencia{1};
	int pontuacao{1};

	std::cin >> nValores;

	std::cin >> valorAnterior;

	for(int i{1}; i < nValores; ++i){
		std::cin >> valorAtual;
		if (valorAtual == valorAnterior) pontuacao++;
		else {
			if( pontuacaoSequencia < pontuacao)
				pontuacaoSequencia = pontuacao;
			pontuacao = 1;
		}
		valorAnterior = valorAtual;
	}

	if (pontuacaoSequencia < pontuacao)
		pontuacaoSequencia = pontuacao;

	std::cout << pontuacaoSequencia << '\n';

	return 0;
}
