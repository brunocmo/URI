#include <iostream>
#include <iomanip>

int main() {

	float dinheiro{0.00f};

	std::cin >> dinheiro;

	std::cout << std::setprecision(0) << std::fixed;

	std::cout << "NOTAS:" << '\n';
	std::cout << static_cast<int>(dinheiro)/100 << " nota(s) de R$ 100.00" << '\n';
	dinheiro -= ((static_cast<int>(dinheiro)/100)*100);
	std::cout << static_cast<int>(dinheiro)/50 << " nota(s) de R$ 50.00" << '\n';
	dinheiro -= (static_cast<int>(dinheiro/50)*50);
	std::cout << static_cast<int>(dinheiro)/20 << " nota(s) de R$ 20.00" << '\n';
	dinheiro -= (static_cast<int>(dinheiro/20)*20);
	std::cout << static_cast<int>(dinheiro)/10 << " nota(s) de R$ 10.00" << '\n';
	dinheiro -= (static_cast<int>(dinheiro/10)*10);
	std::cout << static_cast<int>(dinheiro)/5 << " nota(s) de R$ 5.00" << '\n';
	dinheiro -= (static_cast<int>(dinheiro/5)*5);
	std::cout << static_cast<int>(dinheiro)/2 << " nota(s) de R$ 2.00" << '\n';
	dinheiro -= (static_cast<int>(dinheiro/2)*2);

	std::cout << "MOEDAS:" << '\n';
	std::cout << static_cast<int>(dinheiro)/1 << " moeda(s) de R$ 1.00" << '\n';
	dinheiro -= (static_cast<int>(dinheiro/1)*1);
	std::cout << static_cast<int>(dinheiro/0.50f) << " moeda(s) de R$ 0.50" << '\n';
	dinheiro -= static_cast<int>(dinheiro/0.50f)*0.50f;
	std::cout << static_cast<int>(dinheiro/0.25f) << " moeda(s) de R$ 0.25" << '\n';
	dinheiro -= static_cast<int>(dinheiro/0.25f)*0.25f;
	std::cout << static_cast<int>(dinheiro/0.10f) << " moeda(s) de R$ 0.10" << '\n';
	dinheiro -= static_cast<int>(dinheiro/0.10f)*0.10f;
	std::cout << static_cast<int>(dinheiro/0.05f) << " moeda(s) de R$ 0.05" << '\n';
	dinheiro -= static_cast<int>(dinheiro/0.05f)*0.05f;
	std::cout << (dinheiro*100) << " moeda(s) de R$ 0.01" << '\n';

	return 0;
}
