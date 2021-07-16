#include <iostream>

int main() {

	int x{0};
	int y{0};

	while(true) {

		std::cin >> x >> y;

		if ( x == 0 || y == 0 )	return 0;
		
		if( y > 0 && x > 0) std::cout << "primeiro";
		else
			if( y > 0 && x < 0 ) std::cout << "segundo";
			else
				if( y<0 && x<0) std::cout << "terceiro";
				else
					if ( y<0&&x>0 ) std::cout << "quarto";

		std::cout << '\n';

	}
}
