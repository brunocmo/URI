#include <stdio.h>

int main() {

	int Numero = 0;
	int valor = 0;
	int menorValor = 0;
	int posicaoValor = 0;
	int iterador = 0;

	scanf("%d ", &Numero);

	scanf("%d", &valor);
	menorValor = valor;
	posicaoValor = 0;

	for(iterador = 1; iterador < Numero; iterador++) {
		
		if(iterador < (Numero-1)){
		scanf("%d ", &valor);
		}
		else scanf("%d", &valor);

		if( valor < menorValor ) {
			menorValor = valor;
			posicaoValor = iterador;
		}
	}

	printf("Menor valor: %d\n", menorValor);
	printf("Posicao: %d\n", posicaoValor);

	return 0;
}
