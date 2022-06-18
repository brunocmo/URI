#include <iostream>

int main() {

	unsigned int pretencaoMetros{0};
	unsigned int circularMetros{0};

	std::cin >> pretencaoMetros >> circularMetros;
	std::cout << pretencaoMetros%circularMetros << '\n';


	return 0;
}
