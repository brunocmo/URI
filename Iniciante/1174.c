#include <stdio.h>

int main() {

	float x = 0.0f;
	int i;

	for(i=0; i<100 ; i++) {
		scanf("%f",&x);

		if ( x <= 10.00f ) {	
		printf("A[%d] = %.1f\n", i, x);
		}
	}

	return 0;
}
