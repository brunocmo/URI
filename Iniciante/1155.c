#include <stdio.h>

int main() {

	float S = 0.00f;
	int i = 0;

	for( i=1; i<=100 ; i++ )
		S += (1.00f/i);
	
	printf("%.2f\n", S);

	return 0;
}

