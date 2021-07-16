#include <iostream>

int main() {

	int entradaValor{0};

	std::cin >> entradaValor;

	for(int i = 1; i<=entradaValor; i++) 
		if(i%2==0) std::cout << i <<"^2 = "<<(i*i)<< '\n';

	return 0;
}
