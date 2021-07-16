#include <stdio.h>

int main() {

	int inteiro = 0;
	int iterador = 0;
	float flutuante = 0.0f;

	while(1) {

		scanf("%d", &inteiro);
		
		if ( inteiro < 0 ) break;
		
		++iterador;
		flutuante += inteiro;

	}

	flutuante = (flutuante/iterador);

	printf("%.2f\n", flutuante);

	return 0;
}
