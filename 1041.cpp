#include <iostream>
#include <iomanip>

int main() {

	float x{0};
	float y{0};

	std::cout << std::setprecision(1);

	std::cin >> x;
	std::cin >> y;

	if ( x > 0 && y > 0)
		std::cout << "Q1" << '\n';
	 else {
		if ( x > 0  && y < 0) 
		      std::cout << "Q4" << '\n';	
		else {
			if ( x < 0 && y < 0 )
				std::cout << "Q3" << '\n';
			else {
				if ( x < 0 && y > 0 ) 
					std::cout << "Q2" << '\n';
				else {
					if (x == 0 && y == 0) {
						std::cout << "Origem" << '\n';
					} else {
						if ( x != 0) std::cout << "Eixo X" << '\n';
						else std::cout << "Eixo Y" << '\n';
					}
					
				}

			}
		}
	}



	return 0;
}
