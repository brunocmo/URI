#include <iostream>

int main() {

	int hora1{0};
	int minuto1 {0};
	int hora2{0};
	int minuto2{0};
	int horaResultado{0};
	int minutoResultado{0};

	std::cin >> hora1 >> minuto1 >> hora2 >> minuto2;

	if ( hora1 > hora2 ) {

		if (minuto1 < minuto2) {
			horaResultado = hora2 + (24 - hora1);
			minutoResultado = minuto2 - minuto1;
		}else 
			if (minuto1 > minuto2) {
				minutoResultado = (minuto2 + 60) - minuto1;
			        horaResultado = (hora2 - 1) + (24 - hora1);	
			}else {
				minutoResultado = 0;
				horaResultado = hora2 + (24 - hora1);

			}
		
	} 
	else
		if (hora1 < hora2) 
			
			if (minuto1 < minuto2) {
				horaResultado = hora2 - hora1;
				minutoResultado = minuto2 - minuto1;
			}else
				if (minuto1 > minuto2) {
				 minutoResultado = (minuto2 + 60) -  minuto1;
				 horaResultado = (hora2 - 1) - hora1;	
				}else {
				 minutoResultado = 0;
				 horaResultado = hora2 - hora1;

				}

		else {
			if (minuto1 < minuto2) {
				horaResultado = 0;
				minutoResultado = minuto2 - minuto1;
			}else
				if (minuto1 > minuto2) {
				 minutoResultado = (minuto2 + 60) -  minuto1;
				 horaResultado = 23;	
				}else {
				 minutoResultado = 0;
				 horaResultado = 24;

				}

		}

	std::cout << "O JOGO DUROU " << horaResultado << " HORA(S) E " << minutoResultado << " MINUTO(S)" << '\n' ;


	return 0;

}
