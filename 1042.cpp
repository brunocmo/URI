#include <iostream>

int main() {

	int valores[3] = {0,0,0};
	int temp[3] = {0,0,0};
	int temporario{};

	for(int i = 0; i<3; i++) {
		std::cin >> valores[i];
		temp[i] = valores[i];
	}

	temporario = temp[2];

	for(int k = 0; k<2; k++) {
		for(int j = 2; j>0; j--){
			if ( temp[j] < temp[j-1] ) {
				temporario = temp[j-1];
				temp[j-1] = temp[j];
				temp[j] = temporario;
			}
		}
	}


	for(int l = 0; l<3; l++) std::cout << temp[l] << '\n';

	std::cout << '\n';

	for(int m = 0; m<3; m++) std::cout << valores[m] << '\n';

	return 0;

}
