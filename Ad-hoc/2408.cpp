#include <iostream>

int main() {

	int primeiro{0};
	int segundo{0};
	int terceiro{0};
	int temp{0};

	std::cin >> primeiro >> segundo >> terceiro;

	temp = primeiro;
	if(primeiro < segundo) {
	       primeiro = segundo;
		segundo = temp;
	}
	if(segundo < terceiro) {
		temp = segundo;
		segundo = terceiro;
		terceiro = temp;
	}
	if(primeiro < segundo) {
		temp = primeiro;
		primeiro = segundo;
		segundo  = temp;
	}

		std::cout << segundo << '\n';	

	return 0;
}
