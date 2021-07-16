#include <stdio.h>

int main() {

	int inicialDia{0};
	int inicialHora{0};
	int inicialMinuto{0};
	int inicialSegundo{0};

	int finalDia{0};
	int finalHora{0};
	int finalMinuto{0};
	int finalSegundo{0};

	scanf("Dia %d\n",&inicialDia);

	scanf("%d : %d : %d\n", &inicialHora, &inicialMinuto, &inicialSegundo);
	scanf("Dia %d\n",&finalDia);

	scanf("%d : %d : %d", &finalHora, &finalMinuto, &finalSegundo);


	if( finalSegundo >= inicialSegundo ) {
		finalSegundo -= inicialSegundo;
	}else {
		finalSegundo += (60-inicialSegundo);
		finalMinuto--;
	}
	
	if( finalMinuto >= inicialMinuto )
		finalMinuto -= inicialMinuto;
	else {
		finalMinuto += (60-inicialMinuto);
		finalHora--;
	}

	if( finalHora >= inicialHora)
		finalHora -= inicialHora;
	else{
		finalHora += (24-inicialHora);	
		finalDia--; 
	}

	finalDia -= inicialDia;

	printf("%d dia(s)\n", finalDia);
	printf("%d hora(s)\n", finalHora);
	printf("%d minuto(s)\n", finalMinuto);
	printf("%d segundo(s)\n", finalSegundo);

	return 0;
}
