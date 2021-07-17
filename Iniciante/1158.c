#include <stdio.h>

int main() {

	int N = 0;
	int X = 0;
	int Y = 0;
	int total = 0;

	int i = 0;
	int j = 0;

	scanf("%d", &N);

	for( i = 0; i<N ; i++ ){

		scanf("%d %d", &X, &Y);
		total = 0;
		for( j = 0 ; j<Y; j++){
			if( (X%2) == 0 ) X++;
			total += (X+(j*2));
		}

		printf("%d\n", total);
	}

	

	return 0;
}
