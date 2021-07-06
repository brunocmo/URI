#include <iostream>

int main() {

	int entradaVariavel{0};

	std::cin >> entradaVariavel;

	for(int i = 1; i<=10; i++) std::cout << i << " x " << entradaVariavel << " = " << entradaVariavel*i << '\n'; 

	return 0;
}
