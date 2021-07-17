#include <stdio.h>

int main() {

	int N;
	int X;

	int soma;
	int i;
	int flag = 0;

	scanf("%d", &N);

	while( N!=0 ) {

		scanf("%d", &X);

		
		flag = 0;
		for(i=2; i<X; i++) {
			if( X%i == 0 ) flag = 1 ;	
		}

		if( flag ) printf("%d nao eh primo\n", X);
		else printf("%d eh primo\n", X);

		--N;

	}
	return 0;
}
