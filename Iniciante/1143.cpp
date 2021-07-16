#include <iostream>

int main() {

	int i{0};

	std::cin >> i;

	for(int j{1}; j <= i; j++){

		std::cout << j << " " << j*j << " " << j*j*j << '\n';
	}


	return 0;
}
