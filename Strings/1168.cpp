#include <iostream>

int main() {

	int quantidadeInputs{0};
	char a[1000000];
	int quantidadeLeds{0};

	std::cin >> quantidadeLeds;

	for( int i{0}; i<quantidadeLeds; i++) {

		quantidadeInputs = 0;
		std::cin >> a;

		for(int k{0}; a[k]!='\0'; k++) {
			
			switch(a[k]){
				case '1': quantidadeInputs+=2; break;
				case '2': quantidadeInputs+=5; break;
				case '3': quantidadeInputs+=5; break;
				case '4': quantidadeInputs+=4; break;
				case '5': quantidadeInputs+=5; break;
				case '6': quantidadeInputs+=6; break;
				case '7': quantidadeInputs+=3; break;
				case '8': quantidadeInputs+=7; break;
				case '9': quantidadeInputs+=6; break;
				case '0': quantidadeInputs+=6; break;
				default : break;
			}	
		}

		std::cout << quantidadeInputs << " leds" << '\n';
	}


	return 0;

}

