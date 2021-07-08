#include <iostream>

int main() {

	float i{0.00f};

	while(i<2.01f) {
	
	for(int k{1}; k<=3; k++) {

		std::cout << "I=" << i << " J=" << k+i << '\n';

	}

		i+=0.20f;
	}
	
	return 0;
}

