#include <iostream>
#include <iomanip>


void comparaMaiorMenor( float *valorA, float *valorB ) {
	
	float temp{0.00f};
	if ( *valorA < *valorB ) {
		temp = *valorA;
		*valorA = *valorB;
		*valorB = temp;
	}
}


void maiorParaMenor(float *valorA, float *valorB, float *valorC){
	comparaMaiorMenor(valorA, valorB);
	comparaMaiorMenor(valorB, valorC);
	comparaMaiorMenor(valorA, valorB);
}



int main() {

	float A{0.00f};
	float B{0.00f};
	float C{0.00f};

	
	std::cin >> A >> B >> C;

	float tempA{A}, tempB{B}, tempC{C};

	maiorParaMenor( &tempA, &tempB, &tempC);

	std::cout << std::setprecision(1) << std::fixed;

	((tempB+tempC)>tempA) ? std::cout << "Perimetro = " << (A+B+C) << '\n'
		  : std::cout << "Area = " << ((A+B)*C)/2 << '\n';

	return 0;

}
