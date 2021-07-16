#include <iostream>
#include <iomanip>

int main() {

	float valorSalario{0.0f};
	float resultadoImposto{0.0f};

	std::cin >> valorSalario;

	std::cout << std::setprecision(2) << std::fixed;

	if (valorSalario > 4500.00f) {
		resultadoImposto = 80 + 270 + ((valorSalario - 4500)*0.28f);
	} else
	if (valorSalario > 3000.00f) {
		resultadoImposto = 80 + ((valorSalario - 3000)*0.18f);
	} else
	if (valorSalario > 2000.00f) {
		resultadoImposto = ((valorSalario - 2000)*0.08f);
	} else
	if (valorSalario <= 2000.00f) {
		std::cout << "Isento" << '\n'; return 0;
	}

	std::cout << "R$ " << resultadoImposto << '\n';

	return 0;
}
