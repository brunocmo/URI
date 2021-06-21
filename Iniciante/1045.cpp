#include <iostream>

int main() {

	float A{0.0};
	float B{0.0};
	float C{0.0};
	float varTemp{0.0};

	std::cin >> A >> B >> C;

	if ( A < B ) {
		varTemp = A;
		A = B;
		B = varTemp;
	}
	
	if (A < C) {
		varTemp = A;
		A = C;
		C = varTemp;
	}

	if ( A >= (B+C) ) 
		std::cout << "NAO FORMA TRIANGULO" << '\n';
	else
		if( (A*A) == ((B*B)+(C*C) ) )
			std::cout << "TRIANGULO RETANGULO" << '\n';
		else
			if ( (A*A) > ((B*B)+(C*C) ) )
				std::cout << "TRIANGULO OBTUSANGULO" << '\n';
			else
				if ( (A*A) < ((B*B)+(C*C) ) )
					std::cout << "TRIANGULO ACUTANGULO" << '\n';
	 
	if ( ((A == B) && (B == C))  )
		std::cout << "TRIANGULO EQUILATERO" << '\n';
	else
		if (A == B || A == C || B == C )
			std::cout << "TRIANGULO ISOSCELES" << '\n';


	return 0;
}
