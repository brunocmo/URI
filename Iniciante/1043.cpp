#include <iostream>
#include <iomanip>

int main() {

	float A{};
	float B{};
	float C{};
	float temp{};
	float area{};
	float perimetro{};

	area = ((A+B)*C)/2;
	perimetro = A+B+C;

	



	std::cin >> A >> B >> C;

	std::cout << std::setprecision(1) << std::fixed;

	std::cout << A << std::endl;

	if ( (A+B) <= C ) {
		resultado = ((A+B)*C)/2;
		std::cout << "Area = " << resultado << '\n';
	}
	else {
		resultado = A+B+C;
		std::cout << "Perimetro = " << resultado << '\n';
	}


	return 0;

}
