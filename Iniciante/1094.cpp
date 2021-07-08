#include <iostream>
#include <iomanip>

int main() {

	int numeroTestes{0};
	int TotalCobaias{0};
	int quantiaCobaias{0};
	int numeroCoelhos{0};
	int numeroRatos{0};
	int numeroSapos{0};
	float porcentagens{0.00f};

	char tipoCobaia{' '};
	
	std::cin >> numeroTestes;

	for(int i=0; i<numeroTestes; i++) {
		
		std::cin >> quantiaCobaias >> tipoCobaia;

		TotalCobaias += quantiaCobaias;

		switch(tipoCobaia) {
		
			case 'C': numeroCoelhos += quantiaCobaias; break;
			case 'R': numeroRatos += quantiaCobaias; break;
			case 'S': numeroSapos += quantiaCobaias; break;
			default: break;
		}

	}

	std::cout << "Total: " << TotalCobaias << " cobaias" << '\n';
	std::cout << "Total de coelhos: " << numeroCoelhos << '\n';
	std::cout << "Total de ratos: " << numeroRatos << '\n';
	std::cout << "Total de sapos: " << numeroSapos << '\n';
	std::cout << std::setprecision(2) << std::fixed;
	porcentagens = ( (float)numeroCoelhos/(float)TotalCobaias )*100;
	std::cout << "Percentual de coelhos: " << porcentagens << " %" << '\n';
	porcentagens = ((float)numeroRatos/(float)TotalCobaias ) *100;
	std::cout << "Percentual de ratos: " << porcentagens << " %" << '\n';
	porcentagens = ( (float)numeroSapos/(float)TotalCobaias )*100;
	std::cout << "Percentual de sapos: " << porcentagens << " %" << '\n';


	return 0;
}
