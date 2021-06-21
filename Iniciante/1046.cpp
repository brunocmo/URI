#include <iostream>

int main() {

	int hora1{0};
	int hora2{0};
	int horaResultado{0};

	std::cin >> hora1 >> hora2;

	if ( hora1 > hora2 ) {
	 horaResultado = hora2 + (24 - hora1);
	} 
	else
		if (hora1 < hora2) 
			horaResultado = hora2 - hora1;
		else
			horaResultado = 24;

	std::cout << "O JOGO DUROU " << horaResultado << " HORA(S)" << '\n';


	return 0;

}
