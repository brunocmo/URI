#include <iostream>

int main() {

	int Inter{0};
	int Gremio{0};
	int Empate{0};

	int golsInter{0};
	int golsGremio{0};

	int validacaoGrenal{0};
	int quantosGrenais{0};

	while(1) {

		++quantosGrenais;

		golsInter = 0;
		golsGremio = 0;

		std::cin >> golsInter >> golsGremio;

		if( golsInter > golsGremio ) 
			Inter++;
		else{
			if ( golsGremio > golsInter )
				Gremio++;
			else
				Empate++;
		}

		while(1) {

			std::cout << "Novo grenal (1-sim 2-nao)" << '\n';
			std::cin >> validacaoGrenal;

				if ( validacaoGrenal == 1 || validacaoGrenal == 2) 
					break;

		}
		if ( validacaoGrenal == 2) break;
			
	}

	std::cout << quantosGrenais << " grenais" << '\n';
	std::cout << "Inter:" << Inter << '\n';
	std::cout << "Gremio:" << Gremio << '\n';
	std::cout << "Empates:" << Empate << '\n';

	if ( Inter > Gremio ) std::cout << "Inter venceu mais" << '\n';
	else {
		if ( Gremio > Inter ) std::cout << "Gremio venceu mais" << '\n';
		else std::cout << "Nao houve vencedor" << '\n';
	}

	return 0;
}
