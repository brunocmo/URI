#include <iostream>

int main() {

	int i{0};
	int j{0};

	std::cin >> i >> j;

	for(int k{1}; k<=j; k++)
	{
		if ( k%i == 0 ) std::cout << k << '\n';
		else std::cout << k << " ";
	}


	return 0;
}
