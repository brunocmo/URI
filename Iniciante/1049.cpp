#include <iostream>
#include <string>

int main() {
	
	std::string filo{""};
	std::string classe{""};
	std::string dieta{""};

	std::cin >> filo >> classe >> dieta;

	if ( filo == "vertebrado" ) {

		if (classe == "ave" ) { 
		       if (dieta == "carnivoro") 
			       std::cout << "aguia" << '\n';
			else   
				std::cout << "pomba" << '\n';			
		}
		else {
			if(dieta == "herbivoro")
				std::cout << "vaca" << '\n';
			else    
				std::cout << "homem" << '\n';			
		}
	}
	else {

		if (classe == "inseto") {
			if (dieta == "hematofago")	
				std::cout << "pulga" << '\n';
			else	
				std::cout << "lagarta" << '\n';
		}
		else {
			if (dieta == "hematofago")
				std::cout << "sanguessuga" << '\n';
			else 	
				std::cout << "minhoca" << '\n';
		}
	}
	
	return 0;
}
