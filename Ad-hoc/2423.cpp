#include <iostream>

int main() {
	
	int xicara{0};
	int ovos{0};
	int leite{0};
	int resultado{0};

	std::cin >> xicara >> ovos >> leite;

	xicara = xicara/2;
	ovos = ovos/3;
	leite = leite/5;

	resultado = xicara;

	if (resultado > ovos) 
		resultado = ovos;
	if (resultado > leite)
		resultado = leite;

	std::cout << resultado << '\n';


	return 0;
}
