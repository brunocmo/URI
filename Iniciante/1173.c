#include <stdio.h>

int main() {

	int X;
	int i;

	scanf("%d", &X);

	for( i=0 ; i<10 ; i++) {
		printf("N[%d] = %d\n", i, ( X ));
		X*=2;
	}

	return 0;
}

