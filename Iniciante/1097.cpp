#include <iostream>

int main() {

	int i{1};
	int j{7};

	while(i<=9) {
	
	for(int k{0}; k<3; k++) {
		std::cout << "I=" << i << " J=" << j << '\n';
		j--;
	}	

		j+=5;

		i+=2;
	}
	
	return 0;
}
