#include <stdio.h>

int main() {

	int X = 1;
	int iterador = 0;
	int total = 0;

	scanf("%d", &X);

	while( X != 0) {

		for( total=0 ,iterador = 0; iterador < 5; iterador++) {
			if( (X%2) != 0) X++;

			total += (X+(iterador*2));

		}


		printf("%d\n", total);

		scanf("%d", &X);

	}


	return 0;
}

