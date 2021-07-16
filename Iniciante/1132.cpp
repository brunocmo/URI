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

	for(; x<=y ; x++){
		if( x%13!=0 ) 
			temp+=x;
	}

	std::cout << temp << '\n';

	return 0;
}
