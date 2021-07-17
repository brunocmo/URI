#include <stdio.h>

int main() {

	int N;
	int X;

	int soma;
	int i;

	scanf("%d", &N);

	while( N!=0 ) {

		scanf("%d", &X);

		for(i=1, soma=0; i<X; i++) {
			
			if( X%i == 0 ) soma += i;	
		}

		if( soma == X ) printf("%d eh perfeito\n", X);
		else printf("%d nao eh perfeito\n", X);

		--N;

	}
	return 0;
}
