#include <iostream>

int main() {

	int x{0};
	int y{0};
	int temp{0};

	std::cin >> x >> y;

	if( y < x ){
		temp = x;
		x = y;
		y = temp;
	}

	temp = 0;
	++x;

	for(; x<y ; x++){
		if( x%5 == 2 || x%5 == 3 ) 
			std::cout << x << '\n';
	}

	return 0;
}
