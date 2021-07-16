#include <iostream>
#include <iomanip>
float notaValida(){

	float a{0.00f};
	while(1) {

	std::cin >> a;

	if( a >= 0 && a <=10 ) return a;
	else std::cout << "nota invalida" << '\n';

	}

}


int main() {

	float valorNota1{0.00f};
	float valorNota2{0.00f};
	int simNao{0};


	while(1) {

	valorNota1 = notaValida();
	valorNota2 = notaValida();

	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "media = " << (valorNota1+valorNota2)/2 << '\n';
	
		while(1) {
			std::cout << "novo calculo (1-sim 2-nao)" << '\n';
			std::cin >> simNao;
			
			if( (simNao == 1) || (simNao == 2)) {
				if( simNao == 1 ) break;	
				else return 0;
			}
		}
	}
}
