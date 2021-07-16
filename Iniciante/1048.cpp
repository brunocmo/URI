#include <iostream>
#include <iomanip>

constexpr float aumento15porCento {1.15f};
constexpr float aumento12porCento {1.12f};
constexpr float aumento10porCento {1.10f};
constexpr float aumento7porCento {1.07f};
constexpr float aumento4porCento {1.04f};

int main() {

	float entradaSalario{0.0f};
	float novoSalario{0.0f};
	float reajuste{0.0f};
	int percentual{0};

	std::cin >> entradaSalario;

	std::cout << std::setprecision(2) << std::fixed; 

	if ( entradaSalario >= 0 && entradaSalario <= 400.00f ) {
		novoSalario = entradaSalario * aumento15porCento;
		percentual = 15;
	}else
	if ( entradaSalario > 400.01f && entradaSalario <= 800.00f ) {
		novoSalario = entradaSalario * aumento12porCento;
		percentual = 12;
	}else
	if ( entradaSalario > 800.00f && entradaSalario <= 1200.00f ) {
		novoSalario = entradaSalario * aumento10porCento;
		percentual = 10;
	}else
	if ( entradaSalario > 1200.01f && entradaSalario <= 2000.00f ) {
		novoSalario = entradaSalario * aumento7porCento;
		percentual = 7;
	}else {
		novoSalario = entradaSalario * aumento4porCento;
		percentual = 4;
	}
	
	reajuste = novoSalario - entradaSalario;

	std::cout << "Novo salario: " << novoSalario << '\n';
	std::cout << "Reajuste ganho: " << reajuste << '\n';
	std::cout << "Em percentual: " << percentual << " %" << '\n';

	return 0;

}
