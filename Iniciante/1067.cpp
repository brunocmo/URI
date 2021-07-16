#include <iostream>

int main() {

	int entradaInteiro{0};

	std::cin >> entradaInteiro;

	for(int i = 1; i<=entradaInteiro; i++) 
		if ( i%2!=0 ) std::cout << i << '\n';


	return 0;
}
