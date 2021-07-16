#include <iostream> 



int main() {

	int A{0};
	int N{0};
	int somaTotal{0};

	std::cin >> A;

	while(1) {
		std::cin >> N;

		if( N > 0 ) break;
	}

	for(int i{0}; i<N; i++) somaTotal += (A+i);

	std::cout << somaTotal << '\n';

	return 0;
}

