#include <iostream>

int main() {

	int alcool{0};
	int gasolina{0};
	int diesel{0};
	int menu{0};

	while(1) {

		std::cin >> menu;
		
		switch(menu) {

			case 1 : ++alcool; break;
			case 2 : ++gasolina; break;
			case 3 : ++diesel; break;
			default : break;
		}
	
		if( menu == 4 ) break;

	}

	std::cout << "MUITO OBRIGADO" << '\n';
	std::cout << "Alcool: " << alcool << '\n';
	std::cout << "Gasolina: " << gasolina << '\n';
	std::cout << "Diesel: " << diesel << '\n';
	
	return 0;
}
