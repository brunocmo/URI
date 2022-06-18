#include <iostream>

int main() {

	int X{0};
	int Y{0};

	std::cin >> X >> Y;

	if ( (X >= 0 && X<= 432) && ( Y >= 0 && Y<= 468 ) ) 
		std::cout << "dentro" << '\n';
	else
		std::cout << "fora" << '\n';	

	return 0;
}
