#include <iostream>

int recursao( int L ) {

	if ( L < 2 ) 
	       return 1;
	else 
		return (4 * recursao( L/2 ));	

}

int main() {

	int teste{0};

	std::cin >> teste;

	std::cout << recursao(teste) << '\n';

	return 0;
}
